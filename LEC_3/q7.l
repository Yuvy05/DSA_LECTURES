%%
^[0-9]{12}$ {printf("ADHAAR NUMBER\n") ;}
^[6-9][0-9]{9}$ {printf("PHONE NUMBER\n");fflush(stdout);}
^[A-Z]{5}[0-9]{4}[A-Z]$ {printf("PAN NUMBER\n");} 
^[A-Z]{3}[0-9]{7}$ {printf("VOTERID NUMBER\n");}
^[0-9]{2}[A-Z]{3}[0-9]{4}$ {printf("VIT REGNUMBER\n");}
^[a-z]+\.[a-z]+@vit\.ac\.in$ {printf("FACULTY\n");}
^[a-z]+\.[a-z]+[0-9]{4}@vit\.ac\.in$ {printf("FACULTY\n");}
[ \t\n]+ {printf("NOTHING");}
. {printf("Nothing,");}
%%
int main() {
    // doubt
    yylex() ;
    return 0;
}
int yywrap(){
    return 1 ;
}