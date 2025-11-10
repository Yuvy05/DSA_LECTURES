%{
int lines = 0 , words = 0 , c = 0 , inword = 0 ;  
%}
%%
\n {c++ ; lines++ ;inword = 0;}
[ \t] {c++ ; inword = 0 ;}
[^ \t\n] {c++ ;if(inword == 0){words ++ ; inword = 1 ;}}

%%
int main(){
    // ASS2 3
    printf("Enter : ") ;
    yylex() ;
    printf("Words : %d\n" , words) ;
    printf("Lines : %d\n" , lines) ;
    printf("Characters : %d\n" , c) ;
    return 0 ;
}
int yywrap(){
    return 1 ;
}