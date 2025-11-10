// https://www.geeksforgeeks.org/problems/subset-sums2234/1

// class Solution {
//   public:
//     void solve(vector<int> &arr , int idx , int sum , vector<int> &ans){
//         if(idx== arr.size()){
//             ans.push_back(sum);
//             return ;
//         }
        
//         // pick
        
//         solve(arr , idx+1 , sum + arr[idx] , ans);
        
//         // not pick 
//         solve(arr , idx+1 , sum , ans );
        
        
//     }
//     vector<int> subsetSums(vector<int>& arr) {
//         // code here
//         int idx = 0  , sum = 0; 
//         vector<int> ans ;
//         solve(arr , idx , sum , ans) ;
//         sort(ans.begin() , ans.end()) ;
//         return ans ;
//     }
// };