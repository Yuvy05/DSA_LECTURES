#include<bits/stdc++.h>
using namespace std ;
int main (){

    // PATTERN 1
    // ******

    // int i = 1 ;
    // int n = 5 ;
    // while (i<=n){
    //     cout << "*" ;
    //     i++ ;
    // }
    // cout << endl ;

    // PATTERN 2
    // *
    // **
    // ***
    // ****
    // *****

    // int times = 5 ;
    // int cnt = 1 ;
    // while(cnt <= times){
    //     int i = 1 ;
    //     while (i<=cnt){
    //         cout << "*" ;
    //         i++ ;
    //     }
    //     cout << endl ;
    //     cnt++ ;
    // }

    // PATTERN 3
    // *****
    // *****
    // *****
    // *****
    // *****

    // int i = 1 ;
    // int n = 5 ;
    // while (i <= n){
    //     int m = 1 ;
    //     while(m <= n){
    //         cout << "*" ;
    //         m++ ;
    //     }
    //     cout << endl ;
    //     i ++ ;
    // }

    //PATTERN 4
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int i  = 1 ;
    //     while ( i <=  total_rows - (row - 1)){
    //         cout << "* " ;
    //         i++ ;
    //     }
    //     cout << endl ;
    //     row ++ ;
    // }

    //PATTERN 5
    // *
    // * *
    // * * *
    // * * * *
    // * * *
    // * *
    // * 

    // int total_rows = 7 ;
    // int current_row = 1 ;
    // while (current_row <= ((total_rows/2)+1)){
    //     int m = 1 ;
    //     while (m <= current_row){
    //         cout << "* " ;
    //         m ++ ;
    //     }
    //     cout << endl ;
    //     current_row ++ ;
    // }
    // current_row = 1 ;
    // while(current_row <= (total_rows/2)){
    //     int i = 1 ;
    //     while(i <= (total_rows/2)-(current_row-1)){
    //         cout << "* ";
    //         i++ ;
    //     }
    //     cout << endl ;
    //     current_row++ ;
    // }

    // PATTERN 6
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * * 

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int m = 1 ;
    //     while (m <= total_rows - row){
    //         cout << "  " ;
    //         m++ ;
    //     }
    //     m = 1 ; 
    //     while (m <= row) {
    //         cout << "* " ;
    //         m++ ;
    //     }
    //     cout << endl ;
    //     row++ ;
    // }

    // PATTERN 7
    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *

    // int total_rows = 5 ; 
    // int row = 1 ;
    // while (row <= total_rows){
    //     int m = 1 ;
    //     while(m <= row - 1){
    //         cout << "  ";
    //         m++ ;
    //     }
    //     m = 1 ;
    //     while ( m <= total_rows - (row - 1)){
    //         cout << "* " ;
    //         m++ ;
    //     }
    //     cout << endl ;
    //     row ++ ;
    // }

    // PATTERN 8
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int m = 1 ;
    //     while(m <= row){
    //         cout << m << " ";
    //         m++ ;
    //     }
    //     cout << endl ;
    //     row ++ ;
    // }

    // PATTERN 9
    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int m = 1 ;
    //     while ( m <= total_rows - row){
    //         cout << "  " ;
    //         m++ ;
    //     }
    //     m = 1 ;
    //     while (m <= row){
    //         cout << m << " " ;
    //         m++ ;
    //     }
    //     cout << endl ;
    //     row ++ ;
    // }

    // PATTERN 10 
    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int m = 1 ;
    //     while (m <= total_rows - row){
    //         cout << "  " ;
    //         m++ ;
    //     }
    //     m = row ;
    //     while (m > 0){
    //         cout << m << " " ;
    //         m -- ;
    //     }
    //     cout << endl ;
    //     row ++ ;
    // }

    // PATTERN 11
    // A
    // A B
    // A B C 
    // A B C D 
    // A B C D E 

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int col = 1 ;
    //     while (col <= row){
    //         char c ='A' ;
    //         cout << char(c + (col - 1)) << " ";
    //         col++ ;
    //     }
    //     row++ ;
    //     cout << endl ;
    // }

    // PATTERN 12
    //         A
    //       A B
    //     A B C 
    //   A B C D 
    // A B C D E

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int col = 1 ;
    //     while (col <= total_rows - row){
    //         cout << "  ";
    //         col++ ;
    //     }
    //     col = 1 ;
    //     while (col <= row){
    //         char c = 'A' ;
    //         cout << char(c + (col - 1)) << " " ;
    //         col++ ;
    //     }
    //     cout << endl ;
    //     row++ ;
    // }

    // PATTERN 13
    // A
    // B C 
    // C D E 
    // D E F G 
    // E F G H I 


    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     char c = 'A' ;
    //     int col = 1 ;
    //     c = char(c + (row - 1)) ;
    //     while (col <= row){
    //         cout << char(c + (col - 1 )) << " " ;
    //         col ++ ;
    //     }
    //     cout << endl ;
    //     row++ ;
    // }

    // PATTERN 14 
    //           *
    //         * * *
    //       * * * * *
    //     * * * * * * *
    //   * * * * * * * * * 
    // * * * * * * * * * * *
    
    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int col = 1 ;
    //     while (col <= total_rows - row ){
    //         cout << "  " ;
    //         col++ ;
    //     }
    //     col = 1 ;
    //     int total_col = 2 * (row - 1) + 1 ;
    //     while (col <= total_col){
    //         cout << "* " ;
    //         col++ ;
    //     }
    //     cout << endl ;
    //     row++ ; 
    // }

    // PATTERN 15
    // * * * * * * * * * 
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    // int total_rows = 5 ;
    // int row = 1 ;
    // while (row <= total_rows){
    //     int col = 1 ;
    //     while (col <= row - 1){
    //         cout << "  ";
    //         col++ ;
    //     }
    //     col = 1 ;
    //     int total_col = 2 * (total_rows - row) + 1 ;
    //     while (col <= total_col){
    //         cout << "* " ;
    //         col++ ;
    //     }
    //     cout << endl ;
    //     row++ ;
    // }

    // PATTERN 16
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    //   * * * * * 
    //     * * * 
    //       *

    // int total_row = 7 ;
    // int row = 1 ;
    // int upper = (total_row + 1)/2 ;
    // while (row <= upper){
    //     int col = 1 ;
    //     while (col <= upper - row){
    //         cout << "  " ;
    //         col ++ ;
    //     }
    //     col = 1 ;
    //     int total_col = (2 * (row - 1)) + 1 ;
    //     while (col <= total_col){
    //         cout << "* " ;
    //         col++ ;
    //     }
    //     row++ ;
    //     cout << endl ;
    // }
    // row = 1 ;
    // upper = (total_row - 1) / 2 ;
    // while (row <= upper){
    //     int col = 1 ;
    //     while (col <= row){
    //         cout << "  " ;
    //         col ++ ;
    //     }
    //     col = 1 ;
    //     int total_col = (2 * (upper - row)) + 1 ;
    //     while(col <=  total_col){
    //         cout << "* " ;
    //         col++ ;
    //     }
    //     cout << endl ;
    //     row++ ;
    // }
    
    // CHECKING OF PRIME NUMBER

    // int n = 77 ;
    // int i = 2 ;
    // while (n % i != 0){
    //     i++ ;
    // }
    // if (i == n){
    //     cout << "It is prime" ;
    // }
    // else{
    //     cout<< "It is not prime , factor :" << i <<endl ;
    // }

    // FOR LOOP
    // PATTERN 1
    // *
    // **
    // ***
    // ****
    // *****

    // int total_rows = 5 ;
    // for(int row = 1 ; row <= total_rows ; row++ ){
    //     for(int col = 1 ; col <= row ; col ++){
    //         cout << "*" ;
    //     }
    //     cout << endl ;
    // }
    
    // FIBBONACI SERIES
    // 0, 1, 1, 2, 3, 5, 8, 13, ...

    int first = 0 ;
    int second = 1 ;
    int n = 10 ;
    cout << first << ", " << second << ", " ;
    for (int i = 1 ; i <=n ; i++){
        int third = first + second ;
        cout << third << ", " ;
        first = second ;
        second = third ;
    }
}