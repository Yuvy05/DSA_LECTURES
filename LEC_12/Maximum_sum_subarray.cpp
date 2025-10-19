#include<bits/stdc++.h>
using namespace std ;
void brute_force(vector<int> v){

    //  TC -> O(N^3)
    int sum = INT_MIN ;
    for(int i = 0 ; i < v.size() ; i++){        // starting
        for(int j = i ; j < v.size() ; j++){    // ending
            int t = 0;
            for(int s = i ; s <= j ;s++) {      //  sum b/w starting and ending
                t += v[s] ;
            }
            if(t > sum) sum = t ;
        }
    }
    cout << "max sum : "<< sum << endl ;
}
void optimised_1(vector<int> v){

    //  TC -> O(N^2)
    int sum = INT_MIN ;
    for(int i = 0 ; i < v.size() ; i++){        // starting
        int s = 0 ;
        for(int j = i ; j < v.size() ; j++){    // ending
            s += v[j] ;
            if(s > sum) sum = s ;
        }
    }
    cout << "max sum : "<< sum << endl ;
}
void kadane_algortihm(vector<int> v){
    int s = 0 ;
    int m = INT_MIN ;
    for(int i = 0 ; i < v.size() ; i++){
        s += v[i] ;
        m = max(s,m) ;
        if(s < 0)   s = 0;
    }
    cout << m << endl ;
}
int main(){
    vector<int> v = {-2,1,3,4,-2,-7,3} ;
    // brute_force(v) ;
    // optimised_1(v) ;
    kadane_algortihm(v) ;
}


