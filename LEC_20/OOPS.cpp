#include<bits/stdc++.h>
using namespace std ;
class Student{
    // access specifiers
    public : 
    // data members
    string name ;
    int age ; 
    vector<int> marks; 
    void print_name(){
        cout << "name : "<< name << endl ;
    }
    void print_age(){
        cout << "age : "<< age << endl ;
    }
    // private :
    void print_marks(){
        for(auto i : marks){
            cout << "marks : " << i << endl ;
        }
    }
};
int main(){

    Student s1 , s2;

    s1.name = "Yuvraj" ;
    s1.age = 18 ;
    s1.marks.push_back(25) ;
    s1.print_age() ;
    s1.print_name() ;
    s1.print_marks() ;

    cout << endl ;

    s2.name = "Harsh" ;
    s2.age = 18 ;
    s2.marks.push_back(95) ;
    s2.print_age() ;
    s2.print_name() ;
    s2.print_marks() ;

}