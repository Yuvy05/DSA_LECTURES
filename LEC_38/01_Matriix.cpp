// Problem Link : https://leetcode.com/problems/01-matrix/description/

// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int r = mat.size();
//         int c = mat[0].size();
//         vector<vector<int>> dis(r, vector<int>(c, 1e9));
//         vector<vector<bool>> vis(r, vector<bool>(c, false));

//         queue<vector<int>> q;
//         // queue -> {row , col ,step}

//         for (int i = 0; i < r; i++) {
//             for (int j = 0; j < c; j++) {
//                 if (mat[i][j] == 0) {
//                     q.push({i, j, 0});
//                     dis[i][j] = 0;
//                     vis[i][j] = true;
//                 }
//             }
//         }

//         while (q.size()) {
//             vector<int> v = q.front();
//             int nr = v[0];
//             int nc = v[1];
//             int step = v[2];
//             int dx[] = {-1, 0, 1, 0};
//             int dy[] = {0, 1, 0, -1};
//             q.pop() ;
//             for (int i = 0; i < 4; i++) {
//                 int nrow = nr + dx[i];
//                 int ncol = nc + dy[i];
//                 if (nrow >= 0 and ncol >= 0 and nrow < r and ncol < c and
//                     vis[nrow][ncol] == false) {

//                     dis[nrow][ncol] = step + 1;
//                     q.push({nrow , ncol , step +1}) ;
//                     vis[nrow][ncol] = true ;

//                 }
//             }
//         }
//         return dis ;
//     }
// };