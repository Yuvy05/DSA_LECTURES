// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     vector<int> v = {1, 3, 4};
//     int three_sum = 10;


//     // i + j + k = 11
//     // j + k = 11 - i 
//     // j + k = newsum -> now it is 2sum problem
//     map<int,int> mp;
//     for(int i = 0 ; i < v.size() ; i++){
//         mp[v[i]]++ ;
//     }
//     for(int i = 0 ; i < v.size() ; i++){
//         int newsum = three_sum - v[i] ; 
//         for(int j = i+1 ; j < v.size() ; j++){
            
//             if(mp.find(newsum - v[j]) != mp.end()){
//                 cout << "FOUND \n" ;
//                 return 0;
//             }
//         }
//     }
//     cout << "NOT FOUND \n" ;
// }

#include<bits/stdc++.h>
using namespace std ;
void three_sum(vector<int>v , int ts){
    int n = v.size() ;

    for(int k = 0 ; k < n ; k++){
        int sum = ts - v[k] ;
        map<int , int> mp ;
        for(int i = 0 ; i < n ; i++){
            if(i == k) continue ;
            if(mp.find(sum - v[i]) != mp.end()) {cout << "found\n" ;
            return ; }
            mp[v[i]] ++ ;
        }
    }
    cout << "Element not found \n" ;
    return  ;

}
int main(){
    vector<int> v = {1,3,4,5,7,9};
    int ts = 140 ;
    three_sum(v,ts) ;
}

