#include<bits/stdc++.h>
using namespace std ;
class a{
    public :
    a(){
        cout << "a is called\n" ;
    }
    void hello(){
        cout << "hello from a\n" ;
    } 
};
class b : public a{
    public :
    b(){
        cout <<"b is called\n" ;
    }
    
};
class c : public a{
    public:
    c(){
        cout << "c is called\n" ;
    }
    // void hello(){
    //     cout << "hello form c\n";
    // }
};
class d : public b , public c {
    public :
    d(){
        cout <<"d is called\n" ;
    }
};
int main(){
    d d1;
    // d1.hello() ;
}