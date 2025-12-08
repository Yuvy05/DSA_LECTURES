#include<bits/stdc++.h>
using namespace std ;
class student{
    // access specifiers -> public , private , protected
    // data members
    int age ;
    string name ;
    int get_avg(){
        int sum = 0 ;
        for(auto i : marks){
            sum += i ;
        }
        return sum/marks.size() ;
    }

    public :

    vector<int> marks ;
    void set_name(string s){      // setter and getter function to maintains security and 
        name = s ;          // how much access should be given to the user
    }
    string get_name(){
        return name ;
    }
    void print_name(){
        cout << "my name is :" << name << endl  ; 
    }
    void get_avg_marks(){
        cout << "avereage marks are :" << get_avg() ;
    }

    void print_age(){
        cout << "my age is :" << age  << endl;
    }

    void print_marks(); // function declaration

    student(){                      // default constructor
        cout << "default constuctor is called \n" ;
        name ="" ;
        age =10 ;
    }
    student(int a , string n){      // parametrised constructor
        age = a ;
        name = n ;
        cout << "\nparametrized 1 constructor is called \n" ;

    }
    student(string s){      // parametrised constructor
        name = s ;
        cout << "parametrized 2 constructor is called \n" ;

    }

    // another way for parametrised constructor
    student(string s , int a) : name(s){      // parametrised constructor
        // name = s ;
        cout << "parametrized 2 constructor is called \n" ;

    }

    ~student(){
        cout << "Destructor is called \n" ;
    }
    // student(student &obj){      // copy connstructor define  by ourselves
    //     name = obj.name ;
    //     cout << "copy constructor is called \n" ;
    // }

}s1;

void student :: print_marks(){
    for(auto i : marks ){
            cout << i << " " ;
        }
        cout <<endl ;
}


int main(){

    student s2(21,"yuvraj") ;
    student s3(s2) ;            // default copy constructor

    s1.set_name("yoyo") ;
    s1.print_name () ;
    s3.set_name("raghav") ;
    s2.print_name() ;
    cout << 5 <<endl ;
    // s1.sn("Yuvraj") ;
    // s1.sa(21) ;
    //s1.name = "yuv" ;
    //s1.age = 21 ;
    // s1.marks.push_back(90) ;
    // s1.marks.push_back(80) ;
    // s1.marks.push_back(70) ;
    

    // s1.pa() ;
    // s1.pm() ;
    // s1.pn() ;

    // s2.name = "yuv" ;
    // s2.age = 21 ;
    // s2.marks.push_back(90) ;
    // s2.marks.push_back(80) ;
    // s2.marks.push_back(70) ;

    // s2.pa() ;
    // s2.pm() ;
    // s2.pn() ;

}