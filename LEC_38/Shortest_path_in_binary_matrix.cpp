// Problem Link : https://leetcode.com/problems/shortest-path-in-binary-matrix/

// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         vector<vector<bool>> vis(n, vector<bool>(m, false));

//         if (grid[0][0] == 1) {
//             return -1;
//         }

//         // {x,y}
//         queue<pair<int, int>> q;
//         q.push({0, 0});
//         vis[0][0] = true;

//         int dist = 1;
//         while (q.size()) {
//             int sz = q.size() ;
//             int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
//             int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1} ;
//             for(int i = 0 ; i < sz ; i++){
//                 // nw n ne e
//                 int r = q.front().first;
//                 int c = q.front().second;
//                 if (r == n - 1 and c == m - 1) {
//                     return dist;
//                 }
//                 for (int i = 0; i < 8; i++) {
//                     int nr = r + dx[i];
//                     int nc = c + dy[i];
//                     if (nr >= 0 and nr < n and nc >= 0 and nc < m and
//                         vis[nr][nc] == false and grid[nr][nc] == 0) {

//                         vis[nr][nc] = true;
//                         q.push({nr,nc}) ;
//                     }
//                 }
//                 q.pop() ;
//             }
//             dist++;
//         }
//         return -1 ;
//     }
// };