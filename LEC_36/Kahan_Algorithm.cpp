// Problem Link : https://www.geeksforgeeks.org/problems/topological-sort/1

// class Solution {
//   public:
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>> adj (V) ;
//         for(int i = 0 ; i < edges.size() ;i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//         }
//         vector<int>inDegree(V ,0) ;
//         for(int i = 0 ; i < V ;i++){
//             for(auto it : adj[i]){
//                 inDegree[it]++ ;
//             }
//         }
//         queue<int>q ;
//         for(int i = 0 ; i < V ;i++){
//             if(inDegree[i] == 0){
//                 q.push(i) ;
//             }
//         }
        
//         vector<int> ans ;
//         while(q.size()){
//             int node = q.front() ;
//             q.pop() ;
//             ans.push_back(node) ;
//             for(auto i : adj[node]){
//                 inDegree[i] -- ;
//                 if(inDegree[i] == 0){
//                     q.push(i) ;
//                 }
//             }
            
//         }
//         return ans ;
//     }
// };


// CYCLE DETECTION USING KAHAN 
// class Solution {
//   public:
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         vector<vector<int>>adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//         }
//         vector<int>indegree(V,0) ;
//         queue<int>q ;
//         for(int i = 0 ; i < V ;i++){
//             for(auto it : adj[i]){
//                 indegree[it]++ ;
//             }
//         }
//         for(int i = 0 ; i < V ; i++){
//             if(indegree[i] == 0){
//                 q.push(i) ;
//             }
//         }
//         vector<int> ans ;
//         while(q.size()){
//             int node = q.front() ;
//             q.pop() ;
//             ans.push_back(node) ;
//             for(auto i : adj[node]){
//                 indegree[i] -- ;
//                 if(indegree[i] == 0){
//                     q.push(i) ;
//                 }
//             }
//         }
//         return !(ans.size() == V) ;
        
//     }
// };