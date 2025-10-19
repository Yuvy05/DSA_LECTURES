#include<bits/stdc++.h>
using namespace std ;
void stl_pair(){

    //pair
    // pair<int , int> p = {1,2} ;
    // cout << p.first << " " << p.second ;

    //nested pair
    // pair<int , pair<int , int> >p = {1,{2,3}} ;
    // cout << p.first << " " << p.second.first << " " << p.second.second  ;

    // pair<pair<int,int> , pair<int , int> >p = {{1,4}, {2,3}} ;
    // cout << p.first.first << " " << p.first.second << " " << p.second.first << " " << p.second.second << " " ;

    //array of pair
    // pair<int , int >p [] = {{1,2},{3,4}} ;
    // cout << p[0].first << p[0].second << p[1].first << p[1].second ;

}
void stl_vector(){
    // vector with defaul values as 0

    // vector<int> v (5) ;
    // for(int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << endl ;
    // }

    // vector with user defined defaul values

    // vector<int> v(5,6) ;
    // for(int i =0 ; i < v.size() ; i++){
    //     cout <<v[i] <<endl ;
    // }

    // 1) PUSH_BACK
    // vector<int> v = {1,2,3,5,6,7,8,9,10} ;
    // v.push_back(11) ;
    // for(int i = 0 ; i < v.size() ; i ++){
    //     cout << v[i] << " " ;
    // }

    // 2) BEGIN
    // vector<char> v = {'a' ,'b' , 'c' , 'd'} ;
    // cout << *(v.begin()) << endl  ; 

    // 3) END
    // vector<string> v = {"yuvraj" , "sharma" , "hello"} ;
    // cout << *(--v.end()) << endl ;

    // 4) REVERSE BEGIN
    // vector<int> v = {1,2,3,4,5} ;
    // cout << *(v.rbegin()) << endl ;

    //  5) REVERESE END
    // vector<int> v = {1,2,3,4,5} ;
    // cout << *(--v.rend()) << endl ;

    //  6) SIZE
    // vector<int> v = {1,2,3,4,5} ;
    // cout << v.size() << endl ;

    //  7) EMPTY
    // vector<int> v = {} ;
    // cout << v.empty() << endl ;

    //  8) POP
    // vector<int> v = {1,2,3,4,5} ;
    // v.pop_back() ;
    // v.pop_back() ;
    // cout << v[v.size() - 1] << endl;

    //  9) CLEAR
    // vector<int> v = {1,2,3,4,5} ;
    // cout << "BEFORE CLEAR: " << v.size() << endl;
    // v.clear() ;
    // cout << "AAFTER CLEAR: " << v.size() << endl  ;

    //  10) ERASE
    // vector<int> v = {1,2,3,4,5} ;
    // v.erase(v.begin() + 1) ;
    // cout << v[0] << " " << v[1] <<  endl ;

    //  11) INSERT
    // vector<int> v = {1,2,3,4,5} ;
    // v.insert(v.begin() + 3 , 10) ; // 1,2,3,10,4,5
    // for(int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << " " ;
    // }

    //  12) VECTOR OF PAIRS
    // vector<pair<int , int>> v = {{1,2} , {3,4}} ;
    // cout << v[0].first << " " << v[0].second << endl ;
    // cout << v[1].first << " " << v[1].second << endl ;

    //  13) STORING OF ITERATOR OF VECTOR 
    // vector<int> v = {1,2,3,4,5};
    // vector<int> :: iterator it = v.begin() ;
    // cout << *it << " " << *(it + 1) << endl ; 

    //  14) STORING OF ITERATOR OF VECTOR USING AUTO
    // vector<int> v = {1,2,3,4,5} ;
    // auto it = v.begin() ;
    // cout << *it << " " << *(it + 1) << endl ;

    //  15) PRINTING USING ITERATORS
    // vector<int> v = {1,2,3,4,5} ;
    // for(auto it = v.begin() ; it < v.end() ; it++){
    //     cout << *it << " " ;
    // }
    // cout << endl ;

    //  16) PRINTING USING FOR EACH LOOP
    // vector<int> v = {1,2,3,4,5} ;
    // for(auto it : v){
    //     cout << it << " " ;
    // }
    // cout << endl ;

    //  17) PRINTING USING FOR EACH LOOP USING REFERENCE
    // vector<int> v = {1,2,3,4,5} ;
    // for(auto &it : v){
    //     cout << it << " " ;
    // }
    // cout<< endl ; 
}

void stl_queue(){
    // queue<int>q ;
    // q.push(10) ;
    // q.push(20) ;
    // q.push(30) ;

    // cout << "Size is: " << q.size() << endl; 
    // cout << "First element is : " << q.front() << endl ;
    // cout << "Last Element is : " << q.back() << endl ;

    // // PRINTING ALL ELEMNTS IN QUEUE

    // // while(!q.empty()){
    // //     cout << q.front() << " " ;
    // //     q.pop() ;
    // // }

    // cout << endl ;
}

void stl_stack(){
    // stack<int> st ;
    // st.push(10) ;
    // st.push(20) ;
    // st.push(30) ;
    // cout <<"TOP ELEMENT IS: " << st.top() << endl;
    // cout << "Stack size is :" << st.size() << endl ;
    // while(!st.empty()){
    //     cout << st.top() << endl ;
    //     st.pop() ;
    // }
}
void f_deque(){
    // deque<int>dq ;
    // dq.push_back(10) ;
    // dq.push_front(5) ;
    // cout << "Size : " << dq.size() ;
    // cout << endl ;
    // while(!dq.empty()){
    //     cout << dq.front() ;
    //     dq.pop_front() ;
    //     cout << endl ;
    // }
    // cout << "Size : " << dq.size() ;
}

void f_set(){
    // set<int >st ;
    // st.insert(10) ;
    // st.insert(5) ;
    // st.insert(15) ;
    // st.insert(20) ;
    // st.insert(25) ;

    // for(auto it : st){
    //     cout << it << " " ;
    // }
    // cout << endl ;
    // cout << "Set size :" << st.size() ;
    // cout << endl ;
    // auto it = st.find(25) ;
    // if(it == st.end()){
    //     cout << "Element not found\n";
    // }
    // else{
    //     cout << "Element found\n" ;
    // }
    // cout << *st.upper_bound(25) ;

    // cout << endl ;
}

void f_multiset(){
    // multiset<int> mst ;
    // mst.insert(10) ;
    // mst.insert(20) ;
    // mst.insert(10) ;
    // mst.insert(30) ;
    // for(auto it : mst){
    //     cout << it << " " ;
    // }
    // cout << endl ;
}
void f_unorderedset(){
    // unordered_set<int> ust ;
    // ust.insert(10) ;
    // ust.insert(5) ;
    // ust.insert(15) ;
    // for(auto i : ust){
    //     cout << i << " " ;
    // }
    // cout << endl ;
}
void f_map(){
    // map<string,int> age ;
    // age["Yuvraj"] = 20 ;
    // age["Pinky"] = 23 ;
    // age["Madhulika"] = 30 ;

    // age.insert({"Mummy" , 80}) ;
    // auto it = age.begin() ;
    // while(it != age.end()){
    //     cout << it -> first << " " << it -> second ;
    //     it++;
    //     cout << endl ;
    // }
}

void f_priorityQueue(){
    priority_queue<int> pq ;
    pq.push(10) ;
    pq.push(20) ;
    pq.push(5) ;

    while(!pq.empty()){
        cout << pq.top() << " " ;
        pq.pop() ;
    }
}
int main(){
    stl_pair() ;
    stl_vector() ;
    stl_queue() ;
    stl_stack() ;
    f_deque() ;
    f_set() ;
    f_multiset() ;
    f_unorderedset() ;
    f_map() ;
    f_priorityQueue() ;
}