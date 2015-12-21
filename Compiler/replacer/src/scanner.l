%option noyywrap

%{
	#include<stdio.h>
	void print(const char*);
    const char *t = "#include<unistd.h>\n#include<iostream>\nusing namespace std;\n";
	int first_occurence = 1;
%}

%x replace
%%

"class istream;"                {if (first_occurence ){first_occurence = 0; BEGIN replace;} else {print(yytext);}}
<replace>"#include <unistd.h>"  { print(t); BEGIN INITIAL;}
<replace>[ \n\r;]               {  }
<replace>.                      { printf("error\n"); yyless(0); BEGIN INITIAL;}
. |
\n                              { print(yytext); }

%%

void print(const char* s) {
	fprintf(yyout, "%s", s);
}