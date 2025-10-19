#include<bits/stdc++.h>
using namespace std ;
void using_map(vector<int> v , int sum) {
    map<int,int>mp ;
    for(int i = 0 ; i < v.size() ; i++){
        mp[v[i]] ++;
    }
    for(int i = 0 ; i < v.size() ;i++){
        if(mp.find(sum - v[i]) != mp.end()){
            cout << "found \n" ; 
            return ;
        }
    }
    cout << "Not found \n" ;

}
int main(){
    vector<int> v = {1,3,5,4,2,9} ;
    int sum = 8 ;
    using_map(v,sum);

}

// use case : 1) voting system , medical diagonsis , ai , market research analysis
            