#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,3,2,5,2,3,1,7,2} ;
    vector<int> prefix (v.size()) ;
    int sum = 0 ;
    for(int i = 0 ; i < v.size() ; i++){
        sum += v[i] ;
        prefix[i] = sum ;
    }
    int  l = 2 , r = 5 ;
    cout << "Sum :" << prefix[r] - prefix[l-1] << endl ;

}