#include<bits/stdc++.h>
using namespace std ;
int main(){
    // TC -> O(2*N)
    // SC -> O(N) 
    // Problem Link : https://leetcode.com/problems/next-greater-element-ii/
//     class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size() ;
//         vector<int>v = nums ;
//         for(int i = 0 ; i < n ; i++){
//             v.push_back(nums[i]) ;
//         }

//         vector<int>ans(2*n);

//         stack<int> st ;
//         for(int i = 2*n-1 ; i >= 0  ; i-- ){
//             while(st.size() != 0 and st.top() <= v[i]){
//                 st.pop() ;
//             }
//             if(st.size() == 0){
//                 ans[i] = -1 ;
//             }
//             else{
//                 ans[i] = st.top() ;
//             }
//             st.push(v[i]) ;
//         }
        
//         ans.resize(n);
//         return ans ;

//     }
// };
}