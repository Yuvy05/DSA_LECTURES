// https://www.geeksforgeeks.org/problems/aggressive-cows/1
class Solution {
  public:
    bool canplace(vector<int> &stalls , int dist , int k){
        int ctr = 1 ; 
        int lastplace = stalls[0] ;
        for(int i = 1 ; i < stalls.size() ; i++){
            if(stalls[i] - lastplace >= dist){
                ctr++ ;
                lastplace = stalls[i] ;
            }
        }
        if(ctr >= k){
            return true ;
        }
        return false ;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin() , stalls.end()) ;
        int l = 0 , h = stalls[stalls.size() - 1] - stalls[0] ;
        int ans = -1;
        while(l <= h){
            int mid = (l+h)/2 ;
            if( canplace(stalls, mid , k )){
                //true. -> move right
                l = mid + 1 ;
                ans = max(ans,mid) ;
            }
            else {
                //. -> move left
                h = mid - 1 ;
            }
        }
        return ans;
    }
};