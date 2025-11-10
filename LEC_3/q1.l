%{
    int a = 0 , d = 0 ;
%}
%%
[a-zA-Z] {a++ ;}
[0-9] {d++ ;}
. {}
\n {}
%%
int main(){
    // ASS2 1
    yylex() ;
    printf("Alphabtes are : %d\n" , a) ;
    printf("Digits are : %d\n" , d) ;
    return 0 ;
}
int yywrap(){
    return 1 ;
}
