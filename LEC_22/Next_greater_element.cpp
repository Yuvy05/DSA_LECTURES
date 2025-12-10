#include<bits/stdc++.h>
using namespace std ;

//  TC -> O(N^2)
int bf(){
    vector<int> v = {5,10,2,1,7,2,3};
    vector<int> ans(v.size(),-1) ;
    int n = v.size() ;
    for(int i = 0 ; i < n-1 ; i ++){
        for(int j = i+1 ; j < n ; j++ ){
            if(v[j] > v[i]){
                ans[i] = v[j] ;
                break ;
            }
            else{
                ans[i] = -1 ;
            }
        }
    }
    for(auto i : ans){
        cout << i << " " ;
    }
}
int optiminse(){

    // problem link : https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
//     class Solution {
//   public:
//     vector<int> nextLargerElement(vector<int>& arr) {
//         // code here
//         int n = arr.size() ;
//         vector<int> ans(n) ;
//         stack<int> st ;
//         for(int i = n-1 ; i >= 0 ; i--){
//             while(st.size() != 0 and arr[i] >= st.top() ){
//                 st.pop() ;
//             }
//             if(st.size() == 0){
//                 ans[i] = -1;
                
//             }
//             else {
//                 ans[i] = st.top() ;
//             }
//             st.push(arr[i]) ;
//         }
//         return ans ;
//     }
// };
}