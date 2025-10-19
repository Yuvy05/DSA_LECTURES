#include<bits/stdc++.h>
using namespace std ;
void brute_force(vector<int> a , vector<int> b){

    //  TC -> O( (a+b)*log(a+b) )  -> O(N*LOGN)  (SORITNG TAKES N*LOGN TIME)
    //  SC -> O(a + b) 
    vector<int> ans ;
    for(int i = 0 ; i < a.size() ; i++){
        ans.push_back(a[i]) ;
    }
    for(int i = 0 ; i < b.size() ; i++){
        ans.push_back(b[i]) ;
    }
    sort(ans.begin() , ans.end()) ;

    for(auto i : ans){
        cout << i << " " ;
    }
    cout << endl ;

}

void two_ptr_optimised(vector<int> a , vector<int> b){

    //  TC -> O(N) 
    //  SC -> O(N)
    vector<int> ans ; 
    int i =0 , j = 0 ;
    while(i < a.size() and j < b.size()){
        if(a[i] <= b[j]){
            ans.push_back(a[i]) ;
            i++ ;
        }
        else{
            ans.push_back(b[j]) ;
            j++ ;
        }
    }
    while(i < a.size())    {ans.push_back(a[i]) ; i++;}
    while(j < b.size())   {ans.push_back(b[j]) ; j++;}

    for(auto i : ans){
        cout << i << " " ;
    }
    cout << endl ;

}
int main(){
    vector<int> arr1 = {1,3,5,6,7,8,20};
    vector<int> arr2 = {2,3,4,7,8,9} ;

    brute_force(arr1,arr2) ;
    // two_ptr_optimised(arr1,arr2) ;
}