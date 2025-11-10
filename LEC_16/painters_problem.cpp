// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

class Solution {
  public:
    bool possible(vector<int> &arr , int mid , int k){
        int ctr = 1 ;
        int sum = 0 ;
        for(int i = 0 ; i < arr.size()  ; i++){
            sum+=arr[i] ;
            if(arr[i] > mid) return false ;
            if(sum <= mid){
                continue;
            }
            else{
                ctr++ ;
                sum = arr[i] ;
            }
        }
        if(ctr <= k){
            return true ;
        }
        else{
            return false;
        }
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int sum = 0 ;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i] ;
        }
        int l = 0 , h = sum ;
        int ans = 1e9 ;
        while(l <= h){
            int mid = (l+h)/2 ;
            if(possible(arr , mid ,k )){
                // move to right
                ans = min(ans , mid) ;
                h = mid - 1 ;
            }
            else{
                l = mid + 1 ;
            }
        }
        return ans ;
    }
};