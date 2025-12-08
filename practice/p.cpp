#include<bits/stdc++.h>
using namespace std ;
class student{
    // access specifiers -> public , private , protected
    // data members
    int age ;
    string name ;
    vector<int> marks ;
    public :
    void sn(string s){      // setter and getter function to maintains security and 
        name = s ;          // how much access should be given to the user
    }
    void sa(int n){
        age = n ;
    }
    void gn(){
        cout << "name is : " << name ;
    }
    void pn(){
        cout << "my name is :" << name << endl  ; 
    }
    void pa(){
        cout << "my age is :" << age  << endl;
    }

    void pm(){
                    // function declaration
    }
};

void student :: pm(){
    for(auto i : marks ){
            cout << i << " " ;
        }
        cout <<endl ;
}
int main(){
    student s1,s2 ;
    s1.sn("Yuvraj") ;
    s1.sa(21) ;
    //s1.name = "yuv" ;
    //s1.age = 21 ;
    // s1.marks.push_back(90) ;
    // s1.marks.push_back(80) ;
    // s1.marks.push_back(70) ;
    

    s1.pa() ;
    s1.pm() ;
    s1.pn() ;

    // s2.name = "yuv" ;
    // s2.age = 21 ;
    // s2.marks.push_back(90) ;
    // s2.marks.push_back(80) ;
    // s2.marks.push_back(70) ;

    // s2.pa() ;
    // s2.pm() ;
    // s2.pn() ;

}