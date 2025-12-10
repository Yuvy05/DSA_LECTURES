#include<bits/stdc++.h>
using namespace std ;

//  TC -> O(1)
//  SC -> O(1)
class Minstack{
    stack<int> st ;
    int mn ;
    public : 
    int get_min(){
        return mn ;
    }

    void push(int x){
        if(st.size()==0){
            st.push(x) ;
            mn = x ;
        }
        else{   
            if(x < mn) { // vlaue is smaller than min
                int val = 2*x - mn ;
                st.push(val) ;
                mn = x ;
            }
            else{   // value is greater than max
                st.push(x) ;
            }
            
        }
    }
    void pop(){
        if(st.size() == 0){
            return  ;
        }
        int tp = st.top() ;

        if(tp > mn){
            st.pop() ;
        }
        else{
            mn = (2*mn) - tp ;
        }
    }
};
    // int top(){
    //     if(st.size() == 0 ){
    //         return INT_MAX ;
    //     }
    //     int tp = st.top() ;
    //     if(tp < mn){
    //         return mn ;
    //     }
    //     else{
    //         return tp ;
    //     }
    // }


//  TC -> O(1)
//  SC -> O(N)
// class Minstack{
//     stack<pair<int,int>>st ;
//     public : 
//     int get_min(){
//         return st.top().second ;
//     } 
//     void push(int x){
//         if(st.size() == 0){
//             st.push({x,x}) ;
//         }
//         else{
//             st.push({x,min(x,get_min())}) ;

//         }
//     }
//     void pop(){
//         st.pop() ;
//     }
//     int top(){
//        return st.top().first ; 
//     }
//  }

//  TC -> O(N)
//  SC -> O(N)
// class minstack{
//     stack<int> st ;

//     public : 
//     //  TC -> O(N)  SC -> O(N)
//     int get_min(){
//         int mn = INT_MAX ;
//         stack<int>cpy ;
//         while(st.size()){
//             cpy.push(st.top());
//             mn = min(mn , st.top()) ;
//             st.pop() ;
//         }
//         while(cpy.size()){
//             st.push(cpy.top()) ;
//             cpy.pop() ;
//         }
//     }
//     void push(int x){
//         st.push(x) ;
//     }

//     int pop(){
//         st.pop() ;
//     }

//     int top(){
//         return st.top() ;
//     }
// };


