%%
^([a-zA-Z_$][a-zA-Z_$0-9]*)$ {printf("Valid identifier\n") ;}
^([0-9]+)$ {printf("Valid Number\n") ;}
\n {}
^[^\n\t ]+$ {printf("Invalid\n") ;}
%%
int main(){
    // ASS2 4
    yylex() ;
    return 0;
}
int yywrap(){
    return 1;
}