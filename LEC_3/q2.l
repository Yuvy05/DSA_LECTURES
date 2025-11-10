%{
   int v = 0 , c = 0;  
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++ ;}
. {}
\n {}
%%
int main(){
    // ASS2 2
    yylex() ;
    printf("Number of vowels : %d\n" , v) ;
    printf("Number of consonants : %d\n" , c) ;
    return 0 ;
}
int yywrap(){
    return 1 ;
}