// Problem Link : https://leetcode.com/problems/rotting-oranges/

// class Solution {
// public:
    
//     int orangesRotting(vector<vector<int>>& grid) {

            // adjacency matrix is given
            
//         int n = grid.size() ;
//         queue<pair<int,int>>q ; // {x,y}
//         for(int x = 0 ; x < n ; x++){
//             for(int y = 0 ; y < grid[0].size() ; y++){
//                 if(grid[x][y] == 2){
//                     q.push({x,y}) ; // multi node BFS .
//                     // jaha bho rotten mangoe hai voh saaarey daaldo
//                 }
//             }
//         }

//         int level = -1 ;
//         while(q.size()){
//             int sz = q.size() ;
//             for(int i = 0 ; i < sz ; i++){
//                 int x = q.front().first ;
//                 int y = q.front().second ;
//                 q.pop() ;
//                 //up
//                 if(x-1 >= 0 and grid[x-1][y] == 1){
//                     grid[x-1][y] = 2 ;
//                     q.push({x-1,y}) ;
//                 }
//                 //down
//                 if(x+1 < grid.size() and grid[x+1][y] == 1){
//                     grid[x+1][y] = 2 ;
//                     q.push({x+1,y}) ;
//                 }
//                 //left
//                 if(y-1 >= 0 and grid[x][y-1] == 1 ){
//                     grid[x][y-1] = 2 ;
//                     q.push({x,y-1}) ;
//                 }
//                 //right
//                 if(y+1 < grid[0].size() and grid[x][y+1] == 1 ){
//                     grid[x][y+1] = 2 ;
//                     q.push({x,y+1}) ;
//                 }
//             }
//             level++ ;
//         }
//         for(int x = 0 ; x < n ; x++){
//             for(int y = 0 ; y < grid[0].size()  ; y++){
//                 if(grid[x][y] == 1){
//                     return -1 ;
//                 }
//             }
//         }
//         if(level == -1) return 0 ;
//         return level ;
//     }
// };