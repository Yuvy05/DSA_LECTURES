#include<bits/stdc++.h>
using namespace std ;
void linear_traversal(vector<vector<int>> v){
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = 0 ; j < v.size() ; j++){
            cout << v[i][j] << " " ;
        }
        cout << endl  ;
    }
    cout << endl << endl ;
}
void zig_zag_traversal(vector<vector<int>> v){
    for(int i = 0 ;i < v.size() ; i++){
        for(int j = 0 ; j < v.size() ; j++){
            if(i%2 == 0){
                cout << v[i][j] << " " ;
            }
            else{
                cout << v[i][v.size() - j - 1] << " " ;
            }
        }
        cout << endl ;
    }
}



void spiral_traversal(vector<vector<int>> v){
    int n = v.size() , m = v[0].size() ; 
    int left = 0 ;
    int right = m - 1 ;
    int top = 0 ; 
    int bot = n - 1 ;

    while(left <= right and top <= bot){

        //  top row 
        for(int i = left ; i <= right ; i++){
            cout << v[top][i] << " " ;
        }
        top++ ;
        

        //  right coulumn
        for(int i = top ; i<= bot ; i++ ){
            cout << v[i][right] << " " ;
        }
        right-- ; 

        if(top > bot)   break ;
        //  bottom row
        for(int i = right ; i>= left ; i--){
            cout << v[bot][i] << " " ;
        }
        bot-- ;

        //  left column

        if(left > right)    break ;
        for(int i = bot ; i >= top ; i--){
            cout << v[i][left] << " " ;
        }
        left++ ;
    }
}

void Two_d_matrix_rotate(vector<vector<int>> v){

    //  TC -> O(N*M)
    //  SC -> O(N*M)
    int n = v.size() ;
    int m = v[0].size() ;

    vector<vector<int>> rotate(n , vector<int> (m)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            rotate[j][n-1-i] = v[i][j]  ;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << rotate[i][j] << " "  ;
        }
        cout << endl ;
    }

}

void Two_d_matrix_rotate_optimised(vector<vector<int>> v){

    //  TC -> O(N*M)
    //  SC -> O(1)
    int n = v.size() ;
    int m = v[0].size() ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < m ; j++){
            swap(v[i][j] , v[j][i]) ;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << v[i][m-1-j] << " " ;
        }
        cout << endl ;
    }

}
int main(){
    vector<vector<int> >v = {{1,2,3} , {4,5,6} , {7,8,9}} ; 
    // linear_traversal(v) ;
    // zig_zag_traversal(v) ;
    // spiral_traversal(v) ;
    // Two_d_matrix_rotate(v) ;
    Two_d_matrix_rotate_optimised(v) ;
}


// 1 2 3 6 9 8 7 4 5