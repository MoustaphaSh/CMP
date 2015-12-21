#include "lex.yy.c"

const char *temp_file = "tmp-__-";
int main(int argc, char **argv) {
    if (argc < 2) {
        printf("-_- usage: replacer filename\n");
        return 1;
    } 
    
    if (!(yyin = fopen(argv[1], "r"))) {
        perror(argv[1]);
        return 1;
    }
    if(!(yyout = fopen(temp_file, "w"))) {
        perror(temp_file);
        return 1;
    }
    yylex();
    fclose(yyout);
    fclose(yyin);
    
    FILE *from, *to;
    if(!(from = fopen(temp_file, "r"))) {
        perror(temp_file);
        return 1;
    }
    if (!(to = fopen(argv[1], "w"))) {
        perror(argv[1]);
        return 1;
    }
    
    int buffer_size = 16384;
    char buffer[buffer_size];
    while(fgets(buffer, buffer_size, from) != NULL) {
        fputs(buffer, to);
    }
    fclose(from);
    fclose(to);
    return 0;
}