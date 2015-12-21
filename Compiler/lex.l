/* i hate compilers */
/* i hate visual studio */
/* if you fear/hate sharing your ideas, don't use my stupid tool */


%{
		#include "yacc.hpp";
		#include <iostream>
		#include <istream>
		#include <ostream>
		#include <fstream>
		#include <string>		
		#include <FlexLexer.h>	
		ofstream outlex("C:\\Users\\Moustapha Sh\\Documents\\Visual Studio 2013\\Projects\\Compiler\\Compiler\\Compiler\\outlex.txt");
		int lineNo = 1;
		int colNo = 0;
		int i;
%}
%option c++
%option noyywrap
%x multilinecomment DOCmultilinecomment
%x String_Double String_Single
%x PHP

a [aA]
b [bB]
c [cC]
d [dD]
e [eE]
f [fF]
g [gG]
h [hH]
i [iI]
j [jJ]
k [kK]
l [lL]
m [mM]
n [nN]
o [oO]
p [pP]
q [qQ]
r [rR]
s [sS]
t [tT]
u [uU]
v [vV]
w [wW]
x [xX]
y [yY]
z [zZ]

Single_line_comment		((\/\/)|#)+.*
Number					[0-9]
Variable				($)[a-zA-Z_][a-zA-Z0-9_]*
Name					[a-zA-Z_][a-zA-Z0-9_]*
Null					[^.\n\t]

%%

","												{	colNo += strlen(yytext);
													outlex<<", "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"{"												{	colNo += strlen(yytext);
													outlex<<"{ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"}"												{	colNo += strlen(yytext);
													outlex<<"} "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"="												{	colNo += strlen(yytext);
													outlex<<"= "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"?"												{	colNo += strlen(yytext);
													outlex<<"? "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

":"												{	colNo += strlen(yytext);
													outlex<<": "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"|"												{	colNo += strlen(yytext);
													outlex<<"| "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"^"												{	colNo += strlen(yytext);
													outlex<<"^ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"&"												{	colNo += strlen(yytext);
													outlex<<"& "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"<"												{	colNo += strlen(yytext);
													outlex<<"< "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

">"												{	colNo += strlen(yytext);
													outlex<<"> "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"+"												{	colNo += strlen(yytext);
													outlex<<"+ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"-"												{	colNo += strlen(yytext);
													outlex<<"- "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"."												{	colNo += strlen(yytext);
													outlex<<". "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"*"												{	colNo += strlen(yytext);
													outlex<<"* "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"/"												{	colNo += strlen(yytext);
													outlex<<"/ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"%"												{	colNo += strlen(yytext);
													outlex<<"% "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"!"												{	colNo += strlen(yytext);
													outlex<<"! "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"~"												{	colNo += strlen(yytext);
													outlex<<"~ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"@"												{	colNo += strlen(yytext);
													outlex<<"@ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"["												{	colNo += strlen(yytext);
													outlex<<"[ "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"]"												{	colNo += strlen(yytext);
													outlex<<"] "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"("												{	colNo += strlen(yytext);
													outlex<<"( "<<lineNo<<" "<<colNo<<"\n";
													return left_arc;
												}

")"												{	colNo += strlen(yytext);
													outlex<<") "<<lineNo<<" "<<colNo<<"\n";
													return right_arc;
												}

";"												{	colNo += strlen(yytext);
													outlex<<"; "<<lineNo<<" "<<colNo<<"\n";
													return yytext[0];
												}

"<?php"											|
"<?"											|
"<%"											{	
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<?php "<<lineNo<<" "<<colNo<<"\n";
													return T_OPEN_TAG;
												}

"<?="											|
"<%="											{	
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<?= "<<lineNo<<" "<<colNo<<"\n";
													return T_OPEN_TAG_WITH_ECHO;
												}

"?>"											|
"%>"											{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"colse_tag "<<lineNo<<" "<<colNo<<"\n";
													return T_CLOSE_TAG;
												}


" "+										|
\t											|
\r												{	colNo += strlen(yytext);
												}

\n											{	colNo=0;
													lineNo++;
												}

{a}{b}{s}{t}{r}{a}{c}{t}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"abstract "<<lineNo<<" "<<colNo<<"\n"; 
													return T_ABSTRACT;
												}
						
"&"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"&= "<<lineNo<<" "<<colNo<<"\n";
													return T_AND_EQUAL;
												}

{a}{r}{r}{a}{y}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"array() "<<lineNo<<" "<<colNo<<"\n";
													return T_ARRAY;
												}

"("{a}{r}{r}{a}{y}")"							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(array) "<<lineNo<<" "<<colNo<<"\n";
													return T_ARRAY_CAST;
												}
						
{a}{s}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"as "<<lineNo<<" "<<colNo<<"\n";
													return T_AS;
												}

"&&"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"&& "<<lineNo<<" "<<colNo<<"\n";
													return T_BOOLEAN_AND;
												}

"||"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"|| "<<lineNo<<" "<<colNo<<"\n";
													return T_BOOLEAN_OR;
												}

"("{b}{o}{o}{l}")"									|
"("{b}{o}{o}{l}{e}{a}{n}")"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(bool) "<<lineNo<<" "<<colNo<<"\n";
													return T_BOOL_CAST;
												}

{b}{r}{e}{a}{k}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"break "<<lineNo<<" "<<colNo<<"\n";
													return T_BREAK;
												}

{c}{a}{l}{l}{a}{b}{l}{e}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"callable "<<lineNo<<" "<<colNo<<"\n";
													return T_CALLABLE;
												}

{c}{a}{s}{e}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"case "<<lineNo<<" "<<colNo<<"\n";
													return T_CASE;
												}

{c}{a}{t}{c}{h}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"catch "<<lineNo<<" "<<colNo<<"\n";
													return T_CATCH;
												}

{c}{l}{a}{s}{s}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"class "<<lineNo<<" "<<colNo<<"\n";
													return T_CLASS;
												}

"__"{c}{l}{a}{s}{s}"__"								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__CLASS__ "<<lineNo<<" "<<colNo<<"\n";
													return T_CLASS_C;
												}

{c}{l}{o}{n}{e}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"clone "<<lineNo<<" "<<colNo<<"\n";
													return T_CLONE;
												}


{Single_line_comment}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"comment "<<lineNo++;
												}
"/*"										{	BEGIN multilinecomment;
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;	
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<multilinecomment>[^*/\n]*						{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<multilinecomment>"*"+							{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<multilinecomment>\n							{	strcat(yylval.r.str, yytext);
													colNo =0;
													lineNo++;
												}
<multilinecomment>"*/"							{	BEGIN INITIAL;
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"comment "<<lineNo<<" "<<colNo<<"\n";
												}

"."" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<".= "<<lineNo<<" "<<colNo<<"\n";
													return T_CONCAT_EQUAL;
												}

{c}{o}{n}{s}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"const "<<lineNo<<" "<<colNo<<"\n";
													return T_CONST;
												}

\"											{	BEGIN String_Double;
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;	
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Double>[^\n\\"]*						{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Double>\\\"								{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Double>\n								{	strcat(yylval.r.str, yytext);
													colNo =0;
													lineNo++;
												}
<String_Double>\"								{	BEGIN INITIAL;
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"string"<<yylval.r.str<<" "<<lineNo<<" "<<colNo<<"\n";
													return T_CONSTANT_ENCAPSED_STRING;
												}
						
"'"										{	BEGIN String_Single;
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;	
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Single>[^\n\\']*						{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Single>\\\'								{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<String_Single>\n								{	strcat(yylval.r.str, yytext);
													colNo =0;
													lineNo++;
												}
<String_Single>\'								{	BEGIN INITIAL;
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"string"<<yylval.r.str<<" "<<lineNo<<" "<<colNo<<"\n";
													return T_CONSTANT_ENCAPSED_STRING;
												}

{c}{o}{n}{t}{i}{n}{u}{e}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"continue "<<lineNo<<" "<<colNo<<"\n";
													return T_CONTINUE;
												}

"{$"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"{$ "<<lineNo<<" "<<colNo<<"\n";
													return T_CURLY_OPEN;
												}

"--"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"-- "<<lineNo<<" "<<colNo<<"\n";
													return T_DEC;
												}

{d}{e}{c}{l}{a}{r}{e}							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"declare "<<lineNo<<" "<<colNo<<"\n";
													return T_DECLARE;
												}

{d}{e}{f}{a}{u}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"default "<<lineNo<<" "<<colNo<<"\n";
													return T_DEFAULT;
												}

"__"{d}{i}{r}"__"						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__DIR__ "<<lineNo<<" "<<colNo<<"\n";
													return T_DIR;
												}

"/"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"/= "<<lineNo<<" "<<colNo<<"\n";
													return T_DIV_EQUAL;
												}

"/**"										{	BEGIN DOCmultilinecomment;
													yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;	
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<DOCmultilinecomment>[^*/\n]*						{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<DOCmultilinecomment>"*"+							{	strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
												}
<DOCmultilinecomment>\n							{	strcat(yylval.r.str, yytext);
													colNo =0;
													lineNo++;
												}
<DOCmultilinecomment>"*/"							{	BEGIN INITIAL;
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"comment "<<yylval.r.str<<" "<<lineNo<<" "<<colNo<<"\n";
												}

{d}{o}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"do "<<lineNo<<" "<<colNo<<"\n";
													return T_DO;
												}

"${"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"${ "<<lineNo<<" "<<colNo<<"\n";
													return T_DOLLAR_OPEN_CURLY_BRACES;
												}

"=>"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"=> "<<lineNo<<" "<<colNo<<"\n";
													return T_DOUBLE_ARROW;
												}

"("{r}{e}{a}{l}")"								|
"("{d}{o}{u}{b}{l}{e}")"						|
"("{f}{l}{o}{a}{t}")"							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"double_cost "<<lineNo<<" "<<colNo<<"\n";
													return T_DOUBLE_CAST;
												}

"::"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<":: "<<lineNo<<" "<<colNo<<"\n";
													return T_PAAMAYIM_NEKUDOTAYIM;
												}

{e}{c}{h}{o}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													colNo += strlen(yytext);
													outlex<<"echo "<<lineNo<<" "<<colNo<<"\n";
													return T_ECHO;
												}


"..."										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"... "<<lineNo<<" "<<colNo<<"\n";
													return T_ELLIPSIS;
												}

{e}{l}{s}{e}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"else "<<lineNo<<" "<<colNo<<"\n";
													return T_ELSE;
												}

{e}{l}{s}{e}{i}{f}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"elseif "<<lineNo<<" "<<colNo<<"\n";
													return T_ELSEIF;
												}

{e}{m}{p}{t}{y}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													colNo += strlen(yytext);
													outlex<<"empty "<<lineNo<<" "<<colNo<<"\n";
													return T_EMPTY;
												}

"$a"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"$a "<<lineNo<<" "<<colNo<<"\n";
													return T_ENCAPSED_AND_WHITESPACE;
												}

{e}{n}{d}{d}{e}{c}{l}{a}{r}{e}					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"enddeclare "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDDECLARE;
												}

{e}{n}{d}{f}{o}{r}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"endfor "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDFOR;
												}

{e}{n}{d}{f}{o}{r}{e}{a}{c}{h}					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"endforeach "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDFOREACH;
												}

{e}{n}{d}{i}{f}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"endif "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDIF;
												}

{e}{n}{d}{s}{w}{i}{t}{c}{h}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"endswitch "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDSWITCH;
												}

{e}{n}{d}{w}{h}{i}{l}{e}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"endwhile "<<lineNo<<" "<<colNo<<"\n";
													return T_ENDWHILE;
												}

{e}{v}{a}{l}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"eval() "<<lineNo<<" "<<colNo<<"\n";
													return T_EVAL;
												}

{e}{x}{i}{t}										|
{d}{i}{e}											{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"exit "<<lineNo<<" "<<colNo<<"\n";
													return T_EXIT;
												}

{e}{x}{t}{e}{n}{d}{s}							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"extends "<<lineNo<<" "<<colNo<<"\n";
													return T_EXTENDS;
												}

"__"{f}{i}{l}{e}"__"									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\s0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__FILE__ "<<lineNo<<" "<<colNo<<"\n";
													return T_FILE;
												}

{f}{i}{n}{a}{l}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"final "<<lineNo<<" "<<colNo<<"\n";
													return T_FINAL;
												}

{f}{i}{n}{a}{l}{l}{y}							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"finally "<<lineNo<<" "<<colNo<<"\n";
													return T_FINALLY;
												}

{f}{o}{r}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"for "<<lineNo<<" "<<colNo<<"\n";
													return T_FOR;
												}

{f}{o}{r}{e}{a}{c}{h}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"foreach "<<lineNo<<" "<<colNo<<"\n";
													return T_FOREACH;
												}

{f}{u}{n}{c}{t}{i}{o}{n}									|
{c}{f}{u}{n}{c}{t}{i}{o}{n}					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"function "<<lineNo<<" "<<colNo<<"\n";
													return T_FUNCTION;
												}

"__"{f}{u}{n}{c}{t}{i}{o}{n}"__"				{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__FUNCTION__ "<<lineNo<<" "<<colNo<<"\n";
													return T_FUNC_C;
												}

{g}{l}{o}{b}{a}{l}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"global "<<lineNo<<" "<<colNo<<"\n";
													return T_GLOBAL;
												}

{g}{o}{t}{o}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"goto "<<lineNo<<" "<<colNo<<"\n";
													return T_GOTO;
												}

"__HALT_COMPILER()"	{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__HALT_COMPILER() "<<lineNo<<" "<<colNo<<"\n";
													return T_HALT_COMPILER;
												}
"__"{h}{a}{l}{t}"_"{c}{o}{m}{p}{i}{l}{e}{r}"()"	{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__HALT_COMPILER() "<<lineNo<<" "<<colNo<<"\n";
													return T_HALT_COMPILER;
												}

{i}{f}											{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"if "<<lineNo<<" "<<colNo<<"\n";
													return T_IF;
												}

{i}{m}{p}{l}{e}{m}{e}{n}{t}{s}					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"implements "<<lineNo<<" "<<colNo<<"\n";
													return T_IMPLEMENTS;
												}

"++"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"++ "<<lineNo<<" "<<colNo<<"\n";
													return T_INC;
												}

{i}{n}{c}{l}{u}{d}{e}"()"								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"include() "<<lineNo<<" "<<colNo<<"\n";
													return T_INCLUDE;
												}

{i}{n}{c}{l}{u}{d}{e}"_"{o}{n}{c}{e}		{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"include_once "<<lineNo<<" "<<colNo<<"\n";
													return T_INCLUDE_ONCE;
												}

{i}{n}{s}{t}{a}{n}{c}{e}{o}{f}					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"instanceof "<<lineNo<<" "<<colNo<<"\n";
													return T_INSTANCEOF;
												}

{i}{n}{s}{t}{e}{a}{d}{o}{f}"()"					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"insteadof "<<lineNo<<" "<<colNo<<"\n";
													return T_INSTEADOF;
												}

"("{i}{n}{t}")"									|
"("{i}{n}{t}{e}{g}{e}{r}")"						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(int) "<<lineNo<<" "<<colNo<<"\n";
													return T_INT_CAST;
												}

{i}{n}{t}{e}{r}{f}{a}{c}{e}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"interface "<<lineNo<<" "<<colNo<<"\n";
													return T_INTERFACE;
												}

{i}{s}{s}{e}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"isset() "<<lineNo<<" "<<colNo<<"\n";
													return T_ISSET;
												}

"=="										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"== "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_EQUAL;
												}

">="										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<">=() "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_GREATER_OR_EQUAL;
												}

"==="										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"=== "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_IDENTICAL;
												}

"!="										|
"<>"											{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"!= "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_NOT_EQUAL;
												}

"!=="										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"!== "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_NOT_IDENTICAL;
												}

"<="										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<= "<<lineNo<<" "<<colNo<<"\n";
													return T_IS_SMALLER_OR_EQUAL;
												}

"<=>"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<=> "<<lineNo<<" "<<colNo<<"\n";
													return T_SPACESHIP;
												}

"__"{l}{i}{n}{e}"__"									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__LINE__ "<<lineNo<<" "<<colNo<<"\n";
													return T_LINE;
												}

{l}{i}{s}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"list() "<<lineNo<<" "<<colNo<<"\n";
													return T_LIST;
												}

{Number}*("."{Number}+)?					{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"dnumber "<<lineNo<<" "<<colNo<<"\n";
													return T_DNUMBER;
												}

"-"?{Number}+								|
"0x"[{Number}ABCDEF]+							|
"0b"[01]+										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"lnumber "<<lineNo<<" "<<colNo<<"\n";
													return T_LNUMBER;
												}

{a}{n}{d}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"and "<<lineNo<<" "<<colNo<<"\n";
													return T_LOGICAL_AND;
												}

{o}{r}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"or "<<lineNo<<" "<<colNo<<"\n";
													return T_LOGICAL_OR;
												}

{x}{o}{r}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"xor "<<lineNo<<" "<<colNo<<"\n";
													return T_LOGICAL_XOR;
												}

"__"{m}{e}{t}{h}{o}{d}"__"								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__METHOD__ "<<lineNo<<" "<<colNo<<"\n";
													return T_METHOD_C;
												}

"-"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"-= "<<lineNo<<" "<<colNo<<"\n";
													return T_MINUS_EQUAL;
												}

"%"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"%= "<<lineNo<<" "<<colNo<<"\n";
													return T_MOD_EQUAL;
												}

"*"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"*= "<<lineNo<<" "<<colNo<<"\n";
													return T_MUL_EQUAL;
												}

{n}{a}{m}{e}{s}{p}{a}{c}{e}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"namespace "<<lineNo<<" "<<colNo<<"\n";
													return T_NAMESPACE;
												}

"__"{n}{a}{m}{e}{s}{p}{a}{c}{e}"__"							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__NAMESPACE__ "<<lineNo<<" "<<colNo<<"\n";
													return T_NS_C;
												}

\\											{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"\\ "<<lineNo<<" "<<colNo<<"\n";
													return T_NS_SEPARATOR;
												}

{n}{e}{w}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"new "<<lineNo<<" "<<colNo<<"\n";
													return T_NEW;
												}

"("{o}{b}{j}{e}{c}{t}")"						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(object) "<<lineNo<<" "<<colNo<<"\n";
													return T_OBJECT_CAST;
												}

"->"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"-> "<<lineNo<<" "<<colNo<<"\n";
													return T_OBJECT_OPERATOR;
												}

"|"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"|= "<<lineNo<<" "<<colNo<<"\n";
													return T_OR_EQUAL;
												}

"+"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"+= "<<lineNo<<" "<<colNo<<"\n";
													return T_PLUS_EQUAL;
												}

"**"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"** "<<lineNo<<" "<<colNo<<"\n";
													return T_POW;
												}

"**"" "*"="								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"**= "<<lineNo<<" "<<colNo<<"\n";
													return T_POW_EQUAL;
												}
						
{p}{r}{i}{n}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);		
													colNo += strlen(yytext);
													outlex<<"print() "<<lineNo<<" "<<colNo<<"\n";
													return T_PRINT;
												}

{p}{r}{i}{v}{a}{t}{e}							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"private "<<lineNo<<" "<<colNo<<"\n";
													return T_PRIVATE;
												}

{p}{u}{b}{l}{i}{c}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"public "<<lineNo<<" "<<colNo<<"\n";
													return T_PUBLIC;
												}

{p}{r}{o}{t}{e}{c}{t}{e}{d}						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"protected "<<lineNo<<" "<<colNo<<"\n";
													return T_PROTECTED;
												}

{r}{e}{q}{u}{i}{r}{e}							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"require() "<<lineNo<<" "<<colNo<<"\n";
													return T_REQUIRE;
												}

{r}{e}{q}{u}{i}{r}{e}"_"{o}{n}{c}{e}				{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"require_once "<<lineNo<<" "<<colNo<<"\n";
													return T_REQUIRE_ONCE;
												}

{r}{e}{t}{u}{r}{n}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"return "<<lineNo<<" "<<colNo<<"\n";
													return T_RETURN;
												}

"<<"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<< "<<lineNo<<" "<<colNo<<"\n";
													return T_SL;
												}

"<<"" "*"="								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"<<= "<<lineNo<<" "<<colNo<<"\n";
													return T_SL_EQUAL;
												}

">>"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<">> "<<lineNo<<" "<<colNo<<"\n";
													return T_SR;
												}

">>"" "*"="								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<">> "<<lineNo<<" "<<colNo<<"\n";
													return T_SR_EQUAL;
												}

"<<<"										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<">>> "<<lineNo<<" "<<colNo<<"\n";
													return T_START_HEREDOC;
												}

{s}{t}{a}{t}{i}{c}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"static "<<lineNo<<" "<<colNo<<"\n";
													return T_STATIC;
												}

"("{s}{t}{r}{i}{n}{g}")"						{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(string) "<<lineNo<<" "<<colNo<<"\n";
													return T_STRING_CAST;
												}

{s}{w}{i}{t}{c}{h}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"switch "<<lineNo<<" "<<colNo<<"\n";
													return T_SWITCH;
												}

{t}{h}{r}{o}{w}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"throw "<<lineNo<<" "<<colNo<<"\n";
													return T_THROW;
												}

{t}{r}{a}{i}{t}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"trait "<<lineNo<<" "<<colNo<<"\n";
													return T_TRAIT;
												}

"__"{t}{r}{a}{i}{t}"__"								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"__TRAIT__ "<<lineNo<<" "<<colNo<<"\n";
													return T_TRAIT_C;
												}

{t}{r}{y}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"try "<<lineNo<<" "<<colNo<<"\n";
													return T_TRY;
												}

{u}{n}{s}{e}{t}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"unset() "<<lineNo<<" "<<colNo<<"\n";
													return T_UNSET;
												}

"("{u}{n}{s}{e}{t}")"							{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"(unset) "<<lineNo<<" "<<colNo<<"\n";
													return T_UNSET_CAST;
												}

{u}{s}{e}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"ues "<<lineNo<<" "<<colNo<<"\n";
													return T_USE;
												}

{v}{a}{r}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"var "<<lineNo<<" "<<colNo<<"\n";
													return T_VAR;
												}

{i}{n}{t}											|
{s}{h}{o}{r}{t}											|
{l}{o}{n}{g}											|
{b}{y}{t}{e}											|
{f}{l}{o}{a}{t}											|
{d}{o}{u}{b}{l}{e}										|
{b}{o}{o}{l}									|
{c}{h}{a}{r}											|
{s}{t}{r}{i}{n}{g}								{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"Type "<<lineNo<<" "<<colNo<<"\n";
													return T_TYPE;
												}

{Variable}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"variable "<<lineNo<<" "<<colNo<<"\n";
													return T_VARIABLE;
												}

{w}{h}{i}{l}{e}									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"while "<<lineNo<<" "<<colNo<<"\n";
													return T_WHILE;
												}

"^"" "*"="									{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"^= "<<lineNo<<" "<<colNo<<"\n";
													return T_XOR_EQUAL;
												}

{y}{i}{e}{l}{d}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"yield "<<lineNo<<" "<<colNo<<"\n";
													return T_YIELD;
												}


{Name}										{	yylval.r.myLineNo= lineNo;
													yylval.r.myColno = colNo;
													yylval.r.str = new char[255];
													yylval.r.str[0] = '\0';
													strcat(yylval.r.str, yytext);
													colNo += strlen(yytext);
													outlex<<"String "<<lineNo<<" "<<colNo<<"\n";
													return T_STRING;
												}
											
%%