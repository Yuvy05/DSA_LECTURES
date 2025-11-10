%%
-?[0-9]+\.[0-9]+ {printf("Real NUmber \n") ;}
-?[0-9]+ {printf("Integer :\n") ; }
\n {}
. {}
%%
int main(){
    yylex() ;
    return 0 ;
}
int yywrap(){
    return 1 ;
}