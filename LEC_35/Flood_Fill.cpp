// Problem Link : https://leetcode.com/problems/flood-fill/submissions/1877724490/

// // with DFS
// class Solution {
// public:
//     // dfsg
//     void dfs (vector<vector<int>>& image, int x, int y, int color ,int initialColor){
//         int n = image.size() ;
//         int m = image[0].size() ;
//         if(image[x][y] == color){
//             return ;
//         }
//         image[x][y] = color ;
//         //left 
//         if(y-1 >= 0 and image[x][y-1] != color and image[x][y-1] == initialColor){
//             dfs(image , x , y-1 , color ,initialColor) ;
//         }
//         // up
//         if(x-1 >= 0 and image[x-1][y] != color and image[x-1][y] == initialColor){
//             dfs(image , x-1 , y , color , initialColor) ;
//         }
//         //down
//         if(x+1 <n  and image[x+1][y] != color and image[x+1][y] == initialColor){
//             dfs(image , x+1 , y , color, initialColor) ;
//         }
//         //right
//         if(y+1 < m  and image[x][y+1] != color and image[x][y+1] == initialColor){
//             dfs(image , x , y+1 , color, initialColor) ;
//         }
//         return ;
//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int initialColor = image[sr][sc] ;
//         dfs(image , sr , sc , color , initialColor) ;
//         return image ;
//     }
// };

// // with bfs

// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
//                                   int color) {
//         int n = image.size() ;
//         int m = image[0].size() ;
//         int initialColor = image[sr][sc];
//         if(color == initialColor){return image ;}
//         queue<pair<int, int>> q;
//         q.push({sr, sc});
//         image[sr][sc] = color;
//         while (q.size()) {
//             int x = q.front().first;
//             int y = q.front().second;
//             q.pop();
//             // left
//             if (y - 1 >= 0 and image[x][y - 1] == initialColor and
//                 image[x][y - 1] != color) {
//                     image[x][y-1] = color ;
//                     q.push({x,y-1}) ;
//             }
//             // up
//             if (x - 1 >= 0 and image[x-1][y] == initialColor and
//                 image[x-1][y] != color) {
//                     image[x-1][y] = color ;
//                     q.push({x-1,y}) ;
//             }
//             // down
//             if(x+1 < n and image[x+1][y] == initialColor and image[x+1][y] != color ){
//                 image[x+1][y] = color ;
//                 q.push({x+1 , y}) ;
//             }
//             // right
//             if(y+1 < m and image[x][y+1] == initialColor and image[x][y+1] != color ){
//                 image[x][y+1] = color ;
//                 q.push({x , y+1}) ;
//             }
//         }
//         return image ;
//     }
// };