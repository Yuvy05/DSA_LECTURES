#include<bits/stdc++.h>
using namespace std ;
void solve(vector<vector<int>> &v , vector<vector<int>> &visited , string &d , int i , int j , int r , int c){
    if(i == r-1 and j == c-1){
        cout << d  << endl ;
        return ;
    }

    // int ni , nj ; 
    // //left
    // ni = i , nj = j - 1 ;
    // if((ni < r and nj < c and ni >= 0 and nj >= 0) and visited[ni][nj] == 0 and v[ni][nj] == 0 ){
    //     visited[ni][nj] = 1 ;
    //     d += "L" ;
    //     solve(v , visited , d , ni , nj , r , c) ;
    //     d.pop_back() ;
    //     visited[ni][nj] = 0 ;
    // }
    
    // //right
    // ni = i , nj = j + 1 ;
    // if((ni < r and nj < c and ni >= 0 and nj >= 0) and visited[ni][nj] == 0 and v[ni][nj] == 0 ){
    //     visited[ni][nj] = 1 ;
    //     d += "R" ;
    //     solve(v , visited , d , ni , nj , r , c) ;
    //     d.pop_back() ;
    //     visited[ni][nj] = 0 ;
    // }
    // //up
    // ni = i - 1 , nj = j;
    // if((ni < r and nj < c and ni >= 0 and nj >= 0) and visited[ni][nj] == 0 and v[ni][nj] == 0 ){
    //     visited[ni][nj] = 1 ;
    //     d += "U" ;
    //     solve(v , visited , d , ni , nj , r , c) ;
    //     d.pop_back() ;
    //     visited[ni][nj] = 0 ;
    // }
    // //down
    // ni = i + 1 , nj  = j ;
    // if((ni < r and nj < c and ni >= 0 and nj >= 0) and visited[ni][nj] == 0 and v[ni][nj] == 0 ){
    //     visited[ni][nj] = 1 ;
    //     d += "D" ;
    //     solve(v , visited , d , ni , nj , r , c) ;
    //     d.pop_back() ;
    //     visited[ni][nj] = 0 ;
    // }
    // D L R U

    vector<int> dx ={1 , 0 , 0 , -1 } ;
    vector<int> dy ={0 , -1 , 1 , 0 } ;
    string s = "DLRU" ;

    for(int k = 0 ; k < 4 ; k++){
        int ni = i + dx[k] ;
        int nj = j + dy[k] ;
        if((ni < r and nj < c and ni >= 0 and nj >= 0) and visited[ni][nj] == 0 and v[ni][nj] == 0 ){
            visited[ni][nj] = 1 ;
            d += s[k] ;
            solve(v , visited , d , ni  , nj , r , c) ;
            d.pop_back() ;
            visited[ni][nj] = 0 ;
        }
    }
}
int main(){
    vector<vector<int>> v = {{0,1,0,0,1} , 
                             {0,0,1,0,1} ,
                             {1,0,0,0,1} ,
                             {0,1,1,0,1} ,
                             {1,0,1,0,0}} ;
    int i = 0 , j = 0 ;
    int r = v.size() , c = v[0].size() ;
    vector<vector<int>> visited(r , vector<int>(c , 0)) ;
    string d = "" ;
    visited[i][j] = 1 ;
    solve(v , visited , d , i , j , r ,c ) ;
}