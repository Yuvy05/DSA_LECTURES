%%
\+\+|\-\- {printf("Increment or decrement operator \n") ;}
\+|\-|\*\/\% {printf("Arithmetic Operator \n") ;}
==|!=|>=|<=|>|<|!|= {printf("Relational Operator \n") ;}
\n {}
. {}
%%
int main(){
    // ASS 6
    yylex() ;
    return 0 ;
}
int yywrap(){
    return 1 ;
}