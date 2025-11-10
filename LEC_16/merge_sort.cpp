#include<bits/stdc++.h>
using namespace std ;

//  TC : O(N*LOGN)
void merge(vector<int> &v , int l , int mid , int h){
    vector<int> temp ;
    int i = l , j = mid+1;

    while( i <= mid and j <= h){
        if(v[j] <= v[i]){
            temp.push_back(v[j]) ;
            j++ ;
        }
        else if(v[i] < v[j]){
            temp.push_back(v[i]) ;
            i++ ;
        }
    } 
    while(i <= mid){
        temp.push_back(v[i]) ;
        i++ ;
    }
    while(j <= h){
        temp.push_back(v[j]) ;
        j++ ;
    }

    for(int i = l ; i <= h ; i++){
        v[i] = temp[i - l] ;
    }
}
void merge_sort(vector<int> &v , int l , int h){
    if(l == h)  return ;
    int mid = (l+h)/2 ;
    merge_sort(v , l , mid) ;
    merge_sort(v,mid+1 , h) ;
    merge(v , l , mid , h) ;
}
int main(){
    vector<int> v = { 1,1,4,0,3,2} ;
    int l = 0 , h = v.size() - 1 ;
    merge_sort(v , l , h) ;
    for(auto i : v){
        cout << i << " " ;
    }
}