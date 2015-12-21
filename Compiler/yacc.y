%output ="yacc.cpp"
%{
	#include <iostream>
	#include <ostream>
	#include <istream>
	using namespace std;
	#include <FlexLexer.h>
	
	/*#include "Compiler/MyParser.h"*/

	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	
%}

%nonassoc _def_val_ LP
%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%right T_YIELD
%right T_DOUBLE_ARROW
%right T_YIELD_FROM
%right '{' '}'
%left '=' T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL T_POW_EQUAL
%left '?' ':'
%right T_COALESCE
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left '|'
%left '^'
%left '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL T_SPACESHIP
%nonassoc '<' T_IS_SMALLER_OR_EQUAL '>' T_IS_GREATER_OR_EQUAL
%left T_SL T_SR
%left '+' '-' '.'
%left '*' '/' '%'
%right '!'
%nonassoc T_INSTANCEOF
%right '~' T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST '@'
%right T_POW
%right '[' ']'
%nonassoc T_NEW T_CLONE
%token T_EXIT
%token T_IF
%left T_ELSEIF
%left T_ELSE
%left T_ENDIF
%token T_LNUMBER
%token T_DNUMBER
%token T_STRING
%token T_STRING_VARNAME
%token T_VARIABLE
%token T_NUM_STRING
%token T_INLINE_HTML
%token T_CHARACTER
%token T_BAD_CHARACTER
%token T_ENCAPSED_AND_WHITESPACE
%token T_CONSTANT_ENCAPSED_STRING
%token T_ECHO
%token T_DO
%token T_WHILE
%token T_ENDWHILE
%token T_FOR
%token T_ENDFOR
%token T_FOREACH
%token T_ENDFOREACH
%token T_DECLARE
%token T_ENDDECLARE
%token T_AS
%token T_SWITCH
%token T_ENDSWITCH
%token T_CASE
%token T_DEFAULT
%token T_BREAK
%token T_CONTINUE
%token T_GOTO
%token T_FUNCTION
%token T_CONST
%token T_RETURN
%token T_TRY
%token T_CATCH
%token T_FINALLY
%token T_THROW
%token T_USE
%token T_INSTEADOF
%token T_GLOBAL
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC
%token T_VAR
%token T_UNSET
%token T_ISSET
%token T_EMPTY
%token T_HALT_COMPILER
%token T_CLASS
%token T_TRAIT
%token T_INTERFACE
%token T_EXTENDS
%token T_IMPLEMENTS
%token T_OBJECT_OPERATOR
%token T_DOUBLE_ARROW
%token T_LIST
%token T_ARRAY
%token T_CALLABLE
%token T_CLASS_C
%token T_TRAIT_C
%token T_METHOD_C
%token T_FUNC_C
%token T_LINE
%token T_FILE
%token T_COMMENT
%token T_DOC_COMMENT
%token T_OPEN_TAG
%token T_OPEN_TAG_WITH_ECHO
%token T_CLOSE_TAG
%token T_WHITESPACE
%token T_START_HEREDOC
%token T_END_HEREDOC
%token T_DOLLAR_OPEN_CURLY_BRACES
%token T_CURLY_OPEN
%token T_PAAMAYIM_NEKUDOTAYIM
%token T_NAMESPACE
%token T_NS_C
%token T_DIR
%token T_NS_SEPARATOR
%token T_ELLIPSIS
%token T_TYPE
%nonassoc right_arc left_arc ';'

%union{
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColno;
	}r;
}
	
%%

start:
	T_OPEN_TAG top_statement_list T_CLOSE_TAG
	{cout<<"start1";}
	|T_OPEN_TAG_WITH_ECHO top_statement_list T_CLOSE_TAG
	{cout<<"start2";}
;

top_statement_list:
      top_statement_list top_statement
	  {cout<<"top_statement_list1\n";}
    | /* empty */
	{cout<<"top_statement_list2\n";}
;

reserved_non_modifiers:
      T_INCLUDE | T_INCLUDE_ONCE | T_EVAL | T_REQUIRE | T_REQUIRE_ONCE | T_LOGICAL_OR | T_LOGICAL_XOR | T_LOGICAL_AND
    | T_INSTANCEOF | T_NEW | T_CLONE | T_EXIT | T_IF | T_ELSEIF | T_ELSE | T_ENDIF | T_ECHO | T_DO | T_WHILE
    | T_ENDWHILE | T_FOR | T_ENDFOR | T_FOREACH | T_ENDFOREACH | T_DECLARE | T_ENDDECLARE | T_AS | T_TRY | T_CATCH
    | T_FINALLY | T_THROW | T_USE | T_INSTEADOF | T_GLOBAL | T_VAR | T_UNSET | T_ISSET | T_EMPTY | T_CONTINUE | T_GOTO
    | T_FUNCTION | T_CONST | T_RETURN | T_PRINT | T_YIELD | T_LIST | T_SWITCH | T_ENDSWITCH | T_CASE | T_DEFAULT
    | T_BREAK | T_ARRAY | T_CALLABLE | T_EXTENDS | T_IMPLEMENTS | T_NAMESPACE | T_TRAIT | T_INTERFACE | T_CLASS
;

semi_reserved:
      reserved_non_modifiers
    | T_STATIC | T_ABSTRACT | T_FINAL | T_PRIVATE | T_PROTECTED | T_PUBLIC
;

identifier:
      T_STRING
	  {cout<<"identifier1\n";}
    | semi_reserved
	{cout<<"identifier2\n";}
;

namespace_name_parts:
      T_STRING
	  {cout<<"namespace_name_parts1\n";}
    | namespace_name_parts T_NS_SEPARATOR T_STRING
	{cout<<"namespace_name_parts2\n";}
;

namespace_name:
      namespace_name_parts
	  {	cout<<"namespace_name\n";}
;

top_statement:
      statement
	  {cout<<"top_statement1\n";}
    | function_declaration_statement
	{cout<<"top_statement2\n";}
    | class_declaration_statement
	{cout<<"top_statement3\n";}
    | T_HALT_COMPILER
	{cout<<"top_statement4\n";}
    | T_NAMESPACE namespace_name ';'
	{cout<<"top_statement5\n";}
    | T_NAMESPACE namespace_name '{' top_statement_list '}'
	{cout<<"top_statement6\n";}
    | T_NAMESPACE '{' top_statement_list '}'
	{cout<<"top_statement7\n";}
    | T_USE use_declarations ';'
	{cout<<"top_statement8\n";}
    | T_USE use_type use_declarations ';'
	{cout<<"top_statement9\n";}
    | group_use_declaration ';'
	{cout<<"top_statement10\n";}
    | T_CONST type constant_declaration_list ';'
	{cout<<"top_statement11\n";}
;

use_type:
      T_FUNCTION
	  {cout<<"use_type1\n";}
    | T_CONST
	{cout<<"use_type2\n";}
;

/* Using namespace_name_parts here to avoid s/r conflict on T_NS_SEPARATOR */
group_use_declaration:
      T_USE use_type namespace_name_parts T_NS_SEPARATOR '{' unprefixed_use_declarations '}'
	  {cout<<"group_use_declaration1\n";}
    | T_USE use_type T_NS_SEPARATOR namespace_name_parts T_NS_SEPARATOR '{' unprefixed_use_declarations '}'
	{cout<<"group_use_declaration2\n";}
    | T_USE namespace_name_parts T_NS_SEPARATOR '{' inline_use_declarations '}'
	{cout<<"group_use_declaration3\n";}
    | T_USE T_NS_SEPARATOR namespace_name_parts T_NS_SEPARATOR '{' inline_use_declarations '}'
	{cout<<"group_use_declaration4\n";}
;

unprefixed_use_declarations:
      unprefixed_use_declarations ',' unprefixed_use_declaration
	  {cout<<"unprefixed_use_declarations1\n";}
    | unprefixed_use_declaration
	{cout<<"unprefixed_use_declarations2\n";}
;

use_declarations:
      use_declarations ',' use_declaration
	  {cout<<"use_declarations1\n";}
    | use_declaration
	{cout<<"use_declarations2\n";}
;

inline_use_declarations:
      inline_use_declarations ',' inline_use_declaration
	  {cout<<"inline_use_declarations1\n";}
    | inline_use_declaration
	{cout<<"inline_use_declarations2\n";}
;

unprefixed_use_declaration:
      namespace_name
	  {cout<<"unprefixed_use_declaration1\n";}
    | namespace_name T_AS T_STRING
	{cout<<"unprefixed_use_declaration2\n";}
;

use_declaration:
      unprefixed_use_declaration
	  {cout<<"use_declaration1\n";}
    | T_NS_SEPARATOR unprefixed_use_declaration
	{cout<<"use_declaration2\n";}
;

inline_use_declaration:
      unprefixed_use_declaration
	  {cout<<"inline_use_declaration1\n";} 
    | use_type unprefixed_use_declaration
	{cout<<"inline_use_declaration2\n";}
;

constant_declaration_list:
      constant_declaration_list ',' constant_declaration
	  {cout<<"constant_declaration_list1\n";}
    | constant_declaration
	{cout<<"constant_declaration_list2\n";}
;

constant_declaration:
    T_STRING '=' static_scalar
	{cout<<"constant_declaration\n";}
;

class_const_list:
      class_const_list ',' class_const
	  {cout<<"class_const_list1\n";}
    | class_const
	{cout<<"class_const_list2\n";}
;

class_const:
    identifier '=' static_scalar
	{cout<<"class_const\n";}
;

inner_statement_list:
      inner_statement_list inner_statement
	  {cout<<"inner_statement_list1\n";}
    | /* empty */
	{cout<<"inner_statement_list2\n";}
;

inner_statement:
      statement
	  {cout<<"inner_statement1\n";}
    | function_declaration_statement
	{cout<<"inner_statement2\n";}
    | class_declaration_statement
	{cout<<"inner_statement3\n";}
    | T_HALT_COMPILER
	{cout<<"inner_statement4\n";}
;

statement:
      '{' inner_statement_list '}'
	  {cout<<"statement1\n";}
    | T_IF parentheses_expr statement elseif_list else_single
	{cout<<"statement2\n";}
    | T_IF parentheses_expr ':' inner_statement_list new_elseif_list new_else_single T_ENDIF ';'
	{cout<<"statement3\n";}
    | T_WHILE parentheses_expr while_statement
	{cout<<"statement4\n";}
    | T_DO statement T_WHILE parentheses_expr ';'
	{cout<<"statement5\n";}
    | T_FOR left_arc for_expr ';'  for_expr ';' for_expr right_arc for_statement
	{cout<<"statement6\n";}
    | T_SWITCH parentheses_expr switch_case_list
	{cout<<"statement7\n";}
    | T_BREAK ';'
	{cout<<"statement8\n";}
    | T_BREAK expr ';'
	{cout<<"statement9\n";}
    | T_CONTINUE ';'
	{cout<<"statement10\n";}
    | T_CONTINUE expr ';'
	{cout<<"statement11\n";}
    | T_RETURN ';'
	{cout<<"statement12\n";}
    | T_RETURN expr ';'
	{cout<<"statement13\n";}
    | yield_expr ';'
	{cout<<"statement14\n";}
    | T_GLOBAL type global_var_list ';'
	{cout<<"statement15\n";}
    | T_STATIC type static_var_list ';'
	{cout<<"statement16\n";}
    | T_ECHO expr_list ';'
	{cout<<"statement17\n";}
    | T_INLINE_HTML
	{cout<<"statement18\n";}
    | expr ';'
	{cout<<"statement19\n";}
    | T_UNSET left_arc variables_list right_arc ';'
	{cout<<"statement20\n";}
    | T_FOREACH left_arc expr T_AS foreach_variable right_arc foreach_statement
	{cout<<"statement21\n";}
    | T_FOREACH left_arc expr T_AS variable T_DOUBLE_ARROW foreach_variable right_arc foreach_statement
	{cout<<"statement22\n";}
    | T_DECLARE left_arc declare_list right_arc declare_statement
	{cout<<"statement23\n";}
    | ';'
	{cout<<"statement24\n";}
    | T_TRY '{' inner_statement_list '}' catches optional_finally
	{cout<<"statement25\n";}
    | T_THROW expr ';'
	{cout<<"statement26\n";}
    | T_GOTO T_STRING ';'
	{cout<<"statement27\n";}
    | T_STRING ':'
	{cout<<"statement28\n";}
;

catches:  
      /* empty */
	  {cout<<"catches1\n";}
    | catches catch
	{cout<<"catches2\n";}      
;

catch:
    T_CATCH left_arc name T_VARIABLE right_arc '{' inner_statement_list '}'
	{cout<<"catch\n";}  
;

optional_finally:
      /* empty */
	  {cout<<"optional_finally1\n";}
    | T_FINALLY '{' inner_statement_list '}'
	{cout<<"optional_finally2\n";}
;

variables_list:
      variable
	  {cout<<"variables_list1\n";}
    | variables_list ',' variable
	{cout<<"variables_list2\n";}
;

optional_ref:
      /* empty */
	  {cout<<"optional_ref1\n";}
    | '&'
	{cout<<"optional_ref2\n";}
;

optional_ellipsis:
      /* empty */
	  {cout<<"optional_ellipsis1\n";}
    | T_ELLIPSIS
	{cout<<"optional_ellipsis2\n";}
;

function_declaration_statement:
    T_FUNCTION optional_ref T_STRING left_arc parameter_list right_arc optional_return_type '{' inner_statement_list '}'
	{cout<<"function_declaration_statement "<<$<r.str>1<<" "<<$<r.str>3<<"\n";}
;

class_declaration_statement:
      class_entry_type T_STRING extends_from implements_list '{' class_statement_list '}'
	  {cout<<"class_declaration_statement1\n";}
    | T_INTERFACE T_STRING interface_extends_list '{' class_statement_list '}'
	{cout<<"class_declaration_statement2\n";}
    | T_TRAIT T_STRING '{' class_statement_list '}'
	{cout<<"class_declaration_statement3\n";}
;

class_entry_type:
      T_CLASS
	  {cout<<"class_entry_type1\n";}
    | T_ABSTRACT T_CLASS
	{cout<<"class_entry_type2\n";}
    | T_FINAL T_CLASS
	{cout<<"class_entry_type3\n";}
;

extends_from:
      /* empty */
	  {cout<<"extends_from1\n";}
    | T_EXTENDS name
	{cout<<"extends_from2\n";}
;

interface_extends_list:
      /* empty */
	  {cout<<"interface_extends_list1\n";}
    | T_EXTENDS name_list
	{cout<<"interface_extends_list2\n";}
;

implements_list:
      /* empty */
	  {cout<<"implements_list1\n";}
    | T_IMPLEMENTS name_list
	{cout<<"implements_list2\n";}
;

name_list:
      name
	  {cout<<"name_list1\n";}
    | name_list ',' name
	{cout<<"name_list2\n";}
;

for_statement:
      statement
	  {cout<<"for_statement1\n";}
    | ':' inner_statement_list T_ENDFOR ';'
	{cout<<"for_statement2\n";}
;

foreach_statement:
      statement
	  {cout<<"foreach_statement1\n";}
    | ':' inner_statement_list T_ENDFOREACH ';'
	{cout<<"foreach_statement2\n";}
;

declare_statement:
      statement
	  {cout<<"declare_statement1\n";}
    | ':' inner_statement_list T_ENDDECLARE ';'
	{cout<<"declare_statement2\n";}
;

declare_list:
      declare_list_element
	  {cout<<"declare_list1\n";}
    | declare_list ',' declare_list_element
	{cout<<"declare_list2\n";}
;

declare_list_element:
      T_STRING '=' static_scalar
	  {cout<<"declare_list_element\n";}
;

switch_case_list:
      '{' case_list '}'
	  {cout<<"switch_case_list1\n";}
    | '{' ';' case_list '}'
	{cout<<"switch_case_list2\n";}
    | ':' case_list T_ENDSWITCH ';'
	{cout<<"switch_case_list3\n";}
    | ':' ';' case_list T_ENDSWITCH ';'
	{cout<<"switch_case_list4\n";}
;

case_list:
      /* empty */
	  {cout<<"case_list1\n";}
    | case_list case
	{cout<<"case_list2\n";}
;

case:
      T_CASE expr case_separator inner_statement_list
	  {cout<<"case1\n";}
    | T_DEFAULT case_separator inner_statement_list
	{cout<<"case2\n";}
;

case_separator:
      ':'
	  {cout<<"case_separator1\n";}
    | ';'
	{cout<<"case_separator2\n";}
;

while_statement:
      statement
	  {cout<<"while_statement1\n";}
    | ':' inner_statement_list T_ENDWHILE ';'
	{cout<<"while_statement2\n";}
;

elseif_list:
      /* empty */
	  {cout<<"elseif_list1\n";}
    | elseif_list elseif
	{cout<<"elseif_list2\n";}
;

elseif:
      T_ELSEIF parentheses_expr statement
	  {cout<<"elseif1\n";}
;

new_elseif_list:
      /* empty */
	  {cout<<"new_elseif_list1\n";}
    | new_elseif_list new_elseif
	{cout<<"new_elseif_list2\n";} 
;

new_elseif:
     T_ELSEIF parentheses_expr ':' inner_statement_list
	 {cout<<"new_elseif\n";}
;

else_single:
      /* empty */  %prec LP
	  {cout<<"else_single1\n";}
    | T_ELSE statement
	{cout<<"else_single2\n";}
;

new_else_single:
      /* empty */
	  {cout<<"new_else_single1\n";}
    | T_ELSE ':' inner_statement_list
	{cout<<"new_else_single2\n";}
;

foreach_variable:
      variable
	  {cout<<"foreach_variable1\n";}
    | '&' variable
	{cout<<"foreach_variable2\n";}
    | list_expr
	{cout<<"foreach_variable3\n";}
;

parameter_list:
      non_empty_parameter_list
	  {cout<<"parameter_list1\n";}
    | /* empty */
	{cout<<"parameter_list2\n";}
;

non_empty_parameter_list:
      parameter
	  {cout<<"non_empty_parameter_list1\n";}
    | non_empty_parameter_list ',' parameter
	{cout<<"non_empty_parameter_list2\n";}
;

parameter:
      param_type optional_ref optional_ellipsis T_VARIABLE
	  {cout<<"parameter1\n";}
    | param_type optional_ref optional_ellipsis T_VARIABLE '=' static_scalar
	{cout<<"parameter2\n";}
          
;

type:
      name
	  {cout<<"type1\n";}
    | T_TYPE '[' optional_capacity ']'
	{cout<<"type2\n";}
    | T_CALLABLE
	{cout<<"type3\n";}
	| T_TYPE
	{cout<<"type4\n";}
;

optional_capacity:
	  T_LNUMBER
	  {cout<<"optional_capacity1\n";}
	| /*empty*/
	{cout<<"optional_capacity2";}

param_type:
      type
	  {cout<<"param_type\n";}
;

optional_return_type:
      /* empty */
	  {cout<<"optional_return_type1\n";}
    | ':' type
	{cout<<"optional_return_type2\n";}
;

argument_list:
      left_arc right_arc
	  {cout<<"argument_list1\n";}
    | left_arc non_empty_argument_list right_arc
	{cout<<"argument_list2\n";}
	| left_arc yield_expr right_arc
	{cout<<"argument_list3\n";}
;

non_empty_argument_list:
      argument
	  {cout<<"non_empty_argument_list1\n";}
    | non_empty_argument_list ',' argument
	{cout<<"non_empty_argument_list2\n";}
;

argument:
      expr
	  {cout<<"argument1\n";}
    | '&' variable
	{cout<<"argument2\n";}
    | T_ELLIPSIS expr
	{cout<<"argument3\n";}
;

global_var_list:
      global_var_list ',' global_var
	  {cout<<"global_var_list1\n";}
    | global_var
	{cout<<"global_var_list2\n";}
;

global_var:
      T_VARIABLE
	  {cout<<"global_var1\n";}
    | '$' variable
	{cout<<"global_var2\n";}
    | '$' '{' expr '}'
	{cout<<"global_var3\n";}
;

static_var_list:
      static_var_list ',' static_var
	  {cout<<"static_var_list1\n";}
    | static_var
	{cout<<"static_var_list2\n";}
;

static_var:
      T_VARIABLE
	  {cout<<"static_var1\n";}
    | T_VARIABLE '=' static_scalar
	{cout<<"static_var2\n";}
;

class_statement_list:
      class_statement_list class_statement
	  {cout<<"class_statement_list1\n";}
    | /* empty */
	{cout<<"class_statement_list2\n";}
;

class_statement:
      variable_modifiers type property_declaration_list ';'
	  {cout<<"class_statement1\n";}
    | T_CONST type class_const_list ';'
	{cout<<"class_statement2\n";}
    | method_modifiers T_FUNCTION optional_ref identifier left_arc parameter_list right_arc optional_return_type method_body
	{cout<<"class_statement3\n";}
    | T_USE name_list trait_adaptations
	{cout<<"class_statement4\n";}
;

trait_adaptations:
      ';'
	  {cout<<"trait_adaptations1\n";}
    | '{' trait_adaptation_list '}'
	{cout<<"trait_adaptations2\n";}
;

trait_adaptation_list:
      /* empty */
	  {cout<<"trait_adaptation_list1\n";}
    | trait_adaptation_list trait_adaptation
	{cout<<"trait_adaptation_list2\n";}
;

trait_adaptation:
      trait_method_reference_fully_qualified T_INSTEADOF name_list ';'
	  {cout<<"trait_adaptation1\n";}
    | trait_method_reference T_AS member_modifier identifier ';'
    {cout<<"trait_adaptation2\n";}
    | trait_method_reference T_AS member_modifier ';'
    {cout<<"trait_adaptation3\n";}
    | trait_method_reference T_AS T_STRING ';'
    {cout<<"trait_adaptation4\n";}
    | trait_method_reference T_AS reserved_non_modifiers ';'
    {cout<<"trait_adaptation5\n";}
;

trait_method_reference_fully_qualified:
      name T_PAAMAYIM_NEKUDOTAYIM identifier
	  {cout<<"trait_method_reference_fully_qualified\n";}
;

trait_method_reference:
      trait_method_reference_fully_qualified
	  {cout<<"trait_method_reference1\n";}
    | identifier
	{cout<<"trait_method_reference2\n";}
;

method_body:
      ';' /* T_ABSTRACT method */
	  {cout<<"method_body1\n";}
    | '{' inner_statement_list '}'
	{cout<<"method_body2\n";}
;

variable_modifiers:
      non_empty_member_modifiers
	  {cout<<"variable_modifiers1\n";}
    | /*empty*/
	{cout<<"variable_modifiers2\n";}
;

method_modifiers:
      /* empty */
	  {cout<<"method_modifiers1\n";}
    | non_empty_member_modifiers
	{cout<<"method_modifiers2\n";}
;

non_empty_member_modifiers:
      member_modifier
	  {cout<<"non_empty_member_modifiers1\n";}
    | non_empty_member_modifiers member_modifier
	{cout<<"non_empty_member_modifiers2\n";}
;

member_modifier:
      T_PUBLIC
	  {cout<<"member_modifier1\n";}
    | T_PROTECTED
	{cout<<"member_modifier2\n";}
    | T_PRIVATE
	{cout<<"member_modifier3\n";}
    | T_STATIC
	{cout<<"member_modifier4\n";}
    | T_ABSTRACT
	{cout<<"member_modifier5\n";}
    | T_FINAL
	{cout<<"member_modifier6\n";}
;

property_declaration_list:
      property_declaration
	  {cout<<"property_declaration_list1\n";}
    | property_declaration_list ',' property_declaration
	{cout<<"property_declaration_list2\n";}
;

property_declaration:
	  T_VARIABLE
	  {cout<<"property_declaration1\n";}
    | T_VARIABLE '=' static_scalar
	{cout<<"property_declaration2\n";}
;

expr_list:
      expr_list ',' expr
	  {cout<<"expr_list1\n";}
    | expr
	{cout<<"expr_list2\n";}
;

for_expr:
      /* empty */
	  {cout<<"for_expr1\n";}
    | expr_list
	{cout<<"for_expr2\n";}
;

expr:
      variable
	  {cout<<"expr1\n";}
    | list_expr '=' expr
	{cout<<"expr2\n";}
    | variable '=' expr
	{cout<<"expr3\n";}
    | variable '=' '&' variable
	{cout<<"expr4\n";}
    | variable '=' '&' new_expr
	{cout<<"expr5\n";}
    | new_expr %prec LP
	{cout<<"expr6\n";}
    | T_CLONE expr
	{cout<<"expr7\n";}
	| variable T_PLUS_EQUAL expr
	{cout<<"expr8\n";}
    | variable T_MINUS_EQUAL expr
	{cout<<"expr9\n";}
    | variable T_MUL_EQUAL expr
	{cout<<"expr10\n";}
    | variable T_DIV_EQUAL expr
	{cout<<"expr11\n";}
    | variable T_CONCAT_EQUAL expr
	{cout<<"expr12\n";}
    | variable T_MOD_EQUAL expr
	{cout<<"expr13\n";}
    | variable T_AND_EQUAL expr
	{cout<<"expr14\n";}
    | variable T_OR_EQUAL expr
	{cout<<"expr15\n";}
    | variable T_XOR_EQUAL expr
	{cout<<"expr16\n";}
    | variable T_SR_EQUAL expr
	{cout<<"expr17\n";}
    | variable T_POW_EQUAL expr
	{cout<<"expr18\n";}
    | variable T_INC
	{cout<<"expr19\n";}
    | T_INC variable
	{cout<<"expr20\n";}
    | variable T_DEC
	{cout<<"expr21\n";}
    | T_DEC variable
	{cout<<"expr22\n";}
    | expr T_BOOLEAN_OR expr
	{cout<<"expr23\n";}
    | expr T_BOOLEAN_AND expr
	{cout<<"expr24\n";}
    | expr T_LOGICAL_OR expr
	{cout<<"expr25\n";}
    | expr T_LOGICAL_AND expr
	{cout<<"expr26\n";}
    | expr T_LOGICAL_XOR expr
	{cout<<"expr27\n";}
    | expr '|' expr
	{cout<<"expr28\n";}
    | expr '&' expr
	{cout<<"expr29\n";}
    | expr '^' expr
	{cout<<"expr30\n";}
    | expr '.' expr
	{cout<<"expr31\n";}
    | expr '+' expr
	{cout<<"expr32\n";}
    | expr '-' expr
	{cout<<"expr33\n";}
    | expr '*' expr
	{cout<<"expr34\n";}
    | expr '/' expr
	{cout<<"expr35\n";}
    | expr '%' expr
	{cout<<"expr36\n";}
    | expr T_SL expr
	{cout<<"expr37\n";}
    | expr T_SR expr
	{cout<<"expr38\n";}
    | expr T_POW expr
	{cout<<"expr39\n";}
    | '+' expr %prec T_INC
	{cout<<"expr30\n";}
    | '-' expr %prec T_INC
	{cout<<"expr41\n";}
    | '!' expr
	{cout<<"expr42\n";}
    | '~' expr
	{cout<<"expr43\n";}
    | expr T_IS_IDENTICAL expr
	{cout<<"expr44\n";}
    | expr T_IS_NOT_IDENTICAL expr
	{cout<<"expr45\n";}
    | expr T_IS_EQUAL expr
	{cout<<"expr46\n";}
    | expr T_IS_NOT_EQUAL expr
	{cout<<"expr47\n";}
    | expr T_SPACESHIP expr
	{cout<<"expr48\n";}
    | expr '<' expr
	{cout<<"expr49\n";}
    | expr T_IS_SMALLER_OR_EQUAL expr
	{cout<<"expr50\n";}
    | expr '>' expr
	{cout<<"expr51\n";}
    | expr T_IS_GREATER_OR_EQUAL expr
	{cout<<"expr52\n";}
    | expr T_INSTANCEOF class_name_reference
	{cout<<"expr53\n";}
    | parentheses_expr
	{cout<<"expr54\n";}
    /* we need a separate left_arc new_expr right_arc rule to avoid problems caused by a s/r conflict */
    | left_arc new_expr right_arc
	{cout<<"expr55\n";}
    | expr '?' expr ':' expr
	{cout<<"expr56\n";}
    | expr '?' ':' expr
	{cout<<"expr57\n";}
    | expr T_COALESCE expr
	{cout<<"expr58\n";}
    | T_ISSET left_arc variables_list right_arc
	{cout<<"expr59\n";}
    | T_EMPTY left_arc expr right_arc
	{cout<<"expr60\n";}
    | T_INCLUDE expr
	{cout<<"expr61\n";}
    | T_INCLUDE_ONCE expr
	{cout<<"expr62\n";}
    | T_EVAL parentheses_expr
	{cout<<"expr63\n";}
    | T_REQUIRE expr
	{cout<<"expr64\n";}
    | T_REQUIRE_ONCE expr
	{cout<<"expr65\n";}
    | T_INT_CAST expr
	{cout<<"expr66\n";}
    | T_DOUBLE_CAST expr
	{cout<<"expr67\n";}
    | T_STRING_CAST expr
	{cout<<"expr68\n";}
    | T_ARRAY_CAST expr
	{cout<<"expr69\n";}
    | T_OBJECT_CAST expr
	{cout<<"expr70\n";}
    | T_BOOL_CAST expr
	{cout<<"expr71\n";}
    | T_UNSET_CAST expr
	{cout<<"expr72\n";}
    | T_EXIT exit_expr
	{cout<<"expr73\n";}
    | '@' expr
	{cout<<"expr74\n";}
    | scalar
	{cout<<"expr75\n";}
    | array_expr
	{cout<<"expr76\n";}
    | scalar_dereference
	{cout<<"expr77\n";}
    | '`' backticks_expr '`'
	{cout<<"expr78\n";}
    | T_PRINT expr
	{cout<<"expr79\n";}
    | T_YIELD
	{cout<<"expr80\n";}
    | T_YIELD_FROM expr
	{cout<<"expr81\n";}
    | T_FUNCTION optional_ref left_arc parameter_list right_arc lexical_vars optional_return_type      '{' inner_statement_list '}'
	{cout<<"expr82\n";}
    | T_STATIC T_FUNCTION optional_ref left_arc parameter_list right_arc lexical_vars optional_return_type      '{' inner_statement_list '}'
	{cout<<"expr83\n";}
;

parentheses_expr:
      left_arc expr right_arc
	  {cout<<"parentheses_expr1\n";}
    | left_arc yield_expr right_arc
	{cout<<"parentheses_expr2\n";}
;

yield_expr:
      T_YIELD expr
	  {cout<<"yield_expr1\n";}
    | T_YIELD expr T_DOUBLE_ARROW expr
	{cout<<"yield_expr2\n";}
;

array_expr:
      T_ARRAY left_arc array_pair_list right_arc
	  {cout<<"array_expr1\n";}
    | '[' array_pair_list ']'
	{cout<<"array_expr2\n";}
;

scalar_dereference:
      array_expr '[' dim_offset ']'
	  {cout<<"scalar_dereference1\n";}
    | T_CONSTANT_ENCAPSED_STRING '[' dim_offset ']'
	{cout<<"scalar_dereference2\n";}
    | constant '[' dim_offset ']'
	{cout<<"scalar_dereference3\n";}
    | scalar_dereference '[' dim_offset ']'
	{cout<<"scalar_dereference4\n";}
    /* alternative array syntax missing intentionally */
;

anonymous_class:
      T_CLASS ctor_arguments extends_from implements_list '{' class_statement_list '}'
	  {cout<<"anonymous_class\n";}
          

new_expr:
      T_NEW class_name_reference ctor_arguments
	  {cout<<"new_expr1\n";}
    | T_NEW anonymous_class
	{cout<<"new_expr2\n";}
;

lexical_vars:
      /* empty */
	  {cout<<"lexical_vars1\n";}
    | T_USE left_arc lexical_var_list right_arc
	{cout<<"lexical_vars2\n";}
;

lexical_var_list:
      lexical_var
	  {cout<<"lexical_var_list1\n";}
    | lexical_var_list ',' lexical_var
	{cout<<"lexical_var_list2\n";}
;

lexical_var:
      optional_ref T_VARIABLE
	  {cout<<"lexical_var\n";}     
;

function_call:
      name argument_list
	  {cout<<"function_call1\n";}
    | class_name_or_var T_PAAMAYIM_NEKUDOTAYIM identifier argument_list
    {cout<<"function_call2\n";}
    | class_name_or_var T_PAAMAYIM_NEKUDOTAYIM '{' expr '}' argument_list
    {cout<<"function_call3\n";}
    | static_property argument_list
	{cout<<"function_call4\n";}
	| variable_without_objects argument_list
	{cout<<"function_call5\n";}
    | function_call '[' dim_offset ']'
	{cout<<"function_call6\n";}
      /* alternative array syntax missing intentionally */
;

class_name:
      T_STATIC
	  {cout<<"class_name\n";}
    | name
	{cout<<"class_name\n";}
;

name:
      namespace_name_parts
	  {cout<<"name1\n";}
    | T_NS_SEPARATOR namespace_name_parts
	{cout<<"name2\n";}
    | T_NAMESPACE T_NS_SEPARATOR namespace_name_parts
	{cout<<"name3\n";}
;

class_name_reference:
      class_name
	  {cout<<"class_name_reference1\n";}
    | dynamic_class_name_reference
	{cout<<"class_name_reference2\n";}
;

dynamic_class_name_reference:
      object_access_for_dcnr
	  {cout<<"dynamic_class_name_reference1\n";}
    | base_variable
	{cout<<"dynamic_class_name_reference2\n";}
;

class_name_or_var:
      class_name
	  {cout<<"class_name_or_var1\n";}
    | reference_variable
	{cout<<"class_name_or_var2\n";}
;

object_access_for_dcnr:
      base_variable T_OBJECT_OPERATOR object_property
	  {cout<<"object_access_for_dcnr1\n";}
    | object_access_for_dcnr T_OBJECT_OPERATOR object_property
	{cout<<"object_access_for_dcnr2\n";}
    | object_access_for_dcnr '[' dim_offset ']'
	{cout<<"object_access_for_dcnr3\n";}
    | object_access_for_dcnr '{' expr '}'
	{cout<<"object_access_for_dcnr4\n";}
;

exit_expr:
      /* empty */
	  {cout<<"exit_expr1\n";}
    | left_arc right_arc
	{cout<<"exit_expr2\n";}
    | parentheses_expr
	{cout<<"exit_expr3\n";}
;

backticks_expr:
      /* empty */
	  {cout<<"backticks_expr1\n";}
    | T_ENCAPSED_AND_WHITESPACE
	{cout<<"backticks_expr2\n";}
    | encaps_list
	{cout<<"backticks_expr3\n";}
;

ctor_arguments:
      /* empty */
	  {cout<<"ctor_arguments1\n";}
    | argument_list
	{cout<<"ctor_arguments2\n";}
;

common_scalar:
      T_LNUMBER
	  {cout<<"common_scalar1\n";}
    | T_DNUMBER
	{cout<<"common_scalar2\n";}
    | T_CONSTANT_ENCAPSED_STRING
	{cout<<"common_scalar3\n";}
    | T_LINE
	{cout<<"common_scalar4\n";}
    | T_FILE
	{cout<<"common_scalar5\n";}
    | T_DIR
	{cout<<"common_scalar6\n";}
    | T_CLASS_C
	{cout<<"common_scalar7\n";}
    | T_TRAIT_C
	{cout<<"common_scalar8\n";}
    | T_METHOD_C
	{cout<<"common_scalar9\n";}
    | T_FUNC_C
	{cout<<"common_scalar10\n";}
    | T_NS_C
	{cout<<"common_scalar11\n";}
    | T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC
	{cout<<"common_scalar12\n";}
    | T_START_HEREDOC T_END_HEREDOC
    {cout<<"common_scalar13\n";}
;

static_scalar:
      common_scalar
	  {cout<<"static_scalar1\n";}
    | class_name T_PAAMAYIM_NEKUDOTAYIM identifier
	{cout<<"static_scalar2\n";}
    | name
	{cout<<"static_scalar3\n";}
    | T_ARRAY left_arc static_array_pair_list right_arc
	{cout<<"static_scalar4\n";}
    | '[' static_array_pair_list ']'
	{cout<<"static_scalar5\n";}
    | static_operation
	{cout<<"static_scalar6\n";}
;

static_operation:
      static_scalar T_BOOLEAN_OR static_scalar
	  {cout<<"static_operation1\n";}
    | static_scalar T_BOOLEAN_AND static_scalar
	{cout<<"static_operation2\n";}
    | static_scalar T_LOGICAL_OR static_scalar
	{cout<<"static_operation3\n";}
    | static_scalar T_LOGICAL_AND static_scalar
	{cout<<"static_operation4\n";}
    | static_scalar T_LOGICAL_XOR static_scalar
	{cout<<"static_operation5\n";}
    | static_scalar '|' static_scalar
	{cout<<"static_operation6\n";}
    | static_scalar '&' static_scalar
	{cout<<"static_operation7\n";}
    | static_scalar '^' static_scalar
	{cout<<"static_operation8\n";}
    | static_scalar '.' static_scalar
	{cout<<"static_operation9\n";}
    | static_scalar '+' static_scalar
	{cout<<"static_operation10\n";}
    | static_scalar '-' static_scalar
	{cout<<"static_operation11\n";}
    | static_scalar '*' static_scalar
	{cout<<"static_operation12\n";}
    | static_scalar '/' static_scalar
	{cout<<"static_operation13\n";}
    | static_scalar '%' static_scalar
	{cout<<"static_operation14\n";}
    | static_scalar T_SL static_scalar
	{cout<<"static_operation15\n";}
    | static_scalar T_SR static_scalar
	{cout<<"static_operation16\n";}
    | static_scalar T_POW static_scalar
	{cout<<"static_operation17\n";}
    | '+' static_scalar %prec T_INC
	{cout<<"static_operation18\n";}
    | '-' static_scalar %prec T_INC
	{cout<<"static_operation19\n";}
    | '!' static_scalar
	{cout<<"static_operation20\n";}
    | '~' static_scalar
	{cout<<"static_operation21\n";}                             
	| static_scalar T_IS_IDENTICAL static_scalar
	{cout<<"static_operation22\n";}
    | static_scalar T_IS_NOT_IDENTICAL static_scalar
	{cout<<"static_operation23\n";}
    | static_scalar T_IS_EQUAL static_scalar
	{cout<<"static_operation24\n";}
    | static_scalar T_IS_NOT_EQUAL static_scalar
	{cout<<"static_operation25\n";}
    | static_scalar '<' static_scalar
	{cout<<"static_operation26\n";}
    | static_scalar T_IS_SMALLER_OR_EQUAL static_scalar
	{cout<<"static_operation27\n";}
    | static_scalar '>' static_scalar
	{cout<<"static_operation28\n";}
    | static_scalar T_IS_GREATER_OR_EQUAL static_scalar
	{cout<<"static_operation29\n";}
    | static_scalar '?' static_scalar ':' static_scalar
	{cout<<"static_operation30\n";}
    | static_scalar '?' ':' static_scalar
	{cout<<"static_operation31\n";}
    | static_scalar '[' static_scalar ']'
	{cout<<"static_operation32\n";}
    | left_arc static_scalar right_arc
	{cout<<"static_operation33\n";}
;

constant:
      name
	  {cout<<"constant1\n";}
    | class_name_or_var T_PAAMAYIM_NEKUDOTAYIM identifier
	{cout<<"constant2\n";}      
;

scalar:
      common_scalar
	  {cout<<"scalar1\n";}
    | constant
	{cout<<"scalar2\n";}
    | '"' encaps_list '"'
	{cout<<"scalar3\n";}
    | T_START_HEREDOC encaps_list T_END_HEREDOC
	{cout<<"scalar4\n";}
;

static_array_pair_list:
      /* empty */
	  {cout<<"static_array_pair_list1\n";}
    | non_empty_static_array_pair_list optional_comma
	{cout<<"static_array_pair_list2\n";}
;

optional_comma:
      /* empty */
	  {cout<<"optional_comma1\n";}
    | ','
	{cout<<"optional_comma2\n";}
;

non_empty_static_array_pair_list:
      non_empty_static_array_pair_list ',' static_array_pair
	  {cout<<"non_empty_static_array_pair_list1\n";}
    | static_array_pair
	{cout<<"non_empty_static_array_pair_list2\n";}
;

static_array_pair:
      static_scalar T_DOUBLE_ARROW static_scalar
	  {cout<<"static_array_pair1\n";}
    | static_scalar
	{cout<<"static_array_pair2\n";}
;

variable:
      object_access
	  {cout<<"variable1\n";}
    | base_variable
	{cout<<"variable2\n";}
    | function_call
	{cout<<"variable3\n";}
	| new_expr_array_deref
	{cout<<"variable4\n";}
;

new_expr_array_deref:
      left_arc new_expr right_arc '[' dim_offset ']'
	  {cout<<"new_expr_array_deref1\n";}
    | new_expr_array_deref '[' dim_offset ']'
	{cout<<"new_expr_array_deref2\n";}
      /* alternative array syntax missing intentionally */
;

object_access:
      variable_or_new_expr T_OBJECT_OPERATOR object_property %prec LP
	  {cout<<"object_access1\n";}
    | variable_or_new_expr T_OBJECT_OPERATOR object_property argument_list
	{cout<<"object_access2\n";}
    | object_access argument_list
	{cout<<"object_access3\n";}
    | object_access '[' dim_offset ']'
	{cout<<"object_access4\n";}
    | object_access '{' expr '}'
	{cout<<"object_access5\n";}
;

variable_or_new_expr:
      variable
	  {cout<<"variable_or_new_expr1\n";}
    | left_arc new_expr right_arc
	{cout<<"variable_or_new_expr2\n";}
;

variable_without_objects:
      reference_variable %prec LP
	  {cout<<"variable_without_objects1\n";}
    | '$' variable_without_objects
	{cout<<"variable_without_objects2\n";}
;

base_variable:
      variable_without_objects
	  {cout<<"base_variable1\n";}
    | static_property
	{cout<<"base_variable2\n";}
;

static_property:
      class_name_or_var T_PAAMAYIM_NEKUDOTAYIM '$' reference_variable
	  {cout<<"static_property1\n";}
    | static_property_with_arrays
	{cout<<"static_property2\n";}
;

static_property_with_arrays:
      class_name_or_var T_PAAMAYIM_NEKUDOTAYIM T_VARIABLE
	  {cout<<"static_property_with_arrays1\n";}
    | class_name_or_var T_PAAMAYIM_NEKUDOTAYIM '$' '{' expr '}'
	{cout<<"static_property_with_arrays2\n";}
    | static_property_with_arrays '[' dim_offset ']'
	{cout<<"static_property_with_arrays3\n";}
    | static_property_with_arrays '{' expr '}'
	{cout<<"static_property_with_arrays4\n";}
;

reference_variable:
      reference_variable '[' dim_offset ']'
	  {cout<<"reference_variable1\n";}
    | reference_variable '{' expr '}'
	{cout<<"reference_variable2\n";}
    | T_VARIABLE
	{cout<<"reference_variable3\n";}
	| T_TYPE T_VARIABLE
	{cout<<"reference_variable4\n";}
    | '$' '{' expr '}'
	{cout<<"reference_variable5\n";}
;

dim_offset:
      /* empty */
	  {cout<<"dim_offset1\n";}
    | expr
	{cout<<"dim_offset2\n";}
;

object_property:
      T_STRING
	  {cout<<"object_property1\n";}
    | '{' expr '}'
	{cout<<"object_property2\n";}
    | variable_without_objects
	{cout<<"object_property3\n";}
;

list_expr:
      T_LIST left_arc list_expr_elements right_arc
	  {cout<<"list_expr\n";}
;

list_expr_elements:
      list_expr_elements ',' list_expr_element
	  {cout<<"list_expr_elements1\n";}
    | list_expr_element
	{cout<<"list_expr_elements2\n";}
;

list_expr_element:
      variable
	  {cout<<"list_expr_element1\n";}
    | list_expr
	{cout<<"list_expr_element2\n";}
    | /* empty */
	{cout<<"list_expr_element3\n";}
;

array_pair_list:
      /* empty */
	  {cout<<"array_pair_list1\n";}
    | non_empty_array_pair_list optional_comma
	{cout<<"array_pair_list2\n";}
;

non_empty_array_pair_list:
      non_empty_array_pair_list ',' array_pair
	  {cout<<"non_empty_array_pair_list1\n";}
    | array_pair
	{cout<<"non_empty_array_pair_list2\n";}
;

array_pair:
      expr T_DOUBLE_ARROW expr
	  {cout<<"array_pair1\n";}
    | expr
	{cout<<"array_pair2\n";}
    | expr T_DOUBLE_ARROW '&' variable
	{cout<<"array_pair3\n";}
    | '&' variable
	{cout<<"array_pair4\n";}
;

encaps_list:
      encaps_list encaps_var
	  {cout<<"encaps_list1\n";}
    | encaps_list T_ENCAPSED_AND_WHITESPACE
	{cout<<"encaps_list2\n";}
    | encaps_var
	{cout<<"encaps_list3\n";}
    | T_ENCAPSED_AND_WHITESPACE encaps_var
	{cout<<"encaps_list4\n";}
;

encaps_var:
      T_VARIABLE
	  {cout<<"encaps_var1\n";}
    | T_VARIABLE '[' encaps_var_offset ']'
	{cout<<"encaps_var2\n";}
    | T_VARIABLE T_OBJECT_OPERATOR T_STRING
	{cout<<"encaps_var3\n";}
    | T_DOLLAR_OPEN_CURLY_BRACES expr '}'
	{cout<<"encaps_var4\n";}
    | T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '}'
	{cout<<"encaps_var5\n";}
    | T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'
	{cout<<"encaps_var6\n";}
    | T_CURLY_OPEN variable '}'
	{cout<<"encaps_var7\n";}
;

encaps_var_offset:
      T_STRING
	  {cout<<"encaps_var_offset1\n";}
    | T_NUM_STRING
	{cout<<"encaps_var_offset2\n";}
    | T_VARIABLE
	{cout<<"encaps_var_offset3\n";}
;

%%



void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();
}
void main(void)
{
	freopen("C:\\Users\\Moustapha Sh\\Documents\\Visual Studio 2013\\Projects\\Compiler\\Compiler\\Compiler\\in.txt","r",stdin);
	freopen("C:\\Users\\Moustapha Sh\\Documents\\Visual Studio 2013\\Projects\\Compiler\\Compiler\\Compiler\\out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
	
}