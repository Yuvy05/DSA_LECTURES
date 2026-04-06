// Problem Link : https://leetcode.com/problems/course-schedule/description/

// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         int n = prerequisites.size() ;
//         vector<vector<int>>adj(numCourses) ;
//         for(int i = 0 ; i < prerequisites.size() ; i++){
//             int u = prerequisites[i][0] ;
//             int v = prerequisites[i][1] ;
//             adj[v].push_back(u) ;
//         }
//             int N = numCourses ;
//         vector<int>indegree(N , 0) ;
//         for(int i = 0 ; i < N ; i++){
//             for(auto it : adj[i]){
//                 indegree[it]++ ;
//             }
//         }
//         queue<int>q ;

//         for(int i = 0 ; i < N ; i++){
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
//         return (ans.size() == N) ;
//     }
// };