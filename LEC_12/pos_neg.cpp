#include<bits/stdc++.h>
using namespace std ;
void approach_1(vector<int> v){
    vector<int> p , n ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] < 0)    n.push_back(v[i]) ;
        else    p.push_back(v[i]) ;
    }
    int i = 0 , j =0 ;
    while(i < p.size() and j < n.size()){
        cout << p[i] << " " ;
        i++ ;
        cout << n[j] << " " ;
        j++ ;
    }
    if(i < p.size()){
        for(int j = i ; j < p.size() ; j++){
            cout << p[j] << " " ;
        }
    }
    if(j < n.size()){
        for(int i = j ; i < n.size() ; i++){
            cout << n[i] << " " ;
        }
    }
}

void using_queue(vector<int> v){
    queue<int> p , n ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] >= 0 ){
            p.push(v[i]) ;
        }
        else{
            n.push(v[i]) ;
        }
    }

    vector<int> ans(v.size()) ;
    int k = 0 ;
    while(!p.empty() or !n.empty()){
        if(!p.empty()){
            ans[k] = p.front() ;
            k ++ ;
            p.pop() ;
        }
        if(!n.empty()){
            ans[k] = n.front() ;
            k++ ;
            n.pop() ;
        }
    }
    for(int i=0 ;i < v.size() ; i++){
        cout << ans[i] << " " ;
    }
}
int main(){
    vector <int> v = {1,-2,3,4,-5,6,-7,4} ;
    // approach_1(v) ;
    using_queue(v) ;
}