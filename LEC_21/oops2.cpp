#include<bits/stdc++.h>
#include</Users/yuvrajsharma/Desktop/Coding Blocks/DSA LECTURES/LEC_21/oops2.h>
using namespace std ;

// class animal{

// int game :: lives =  0; // because it is static and not bound by any object 
                        // so when we make an object if the class 
                        // its(static variable) memory is not made
                        // so have to make it globally again

// game :: game(string name){
//         this -> name = name ;
// }
// game :: game(){

// }
// void game :: print_name(string name){
//         cout << this->name << " " << name << endl ;
// }
// int game :: play(){
//     cout << "we are playing\n" ;
// }

// class cb{
//     public :

//     // polymorphisim
//     // function overloading
//     void func(int a, int b , int c){
//         cout << a+b+c<<endl;
//     }
//     void func(int a , int b){
//         cout << a + b << endl ;
//     }
// };

// operator overloading
class complexnums{
    public : 
    double real ;
    double imagi ;

    //operator overloading 
    complexnums operator+(complexnums &c1){
        complexnums result ;
        result.imagi = imagi + c1.imagi ; 
        result.real = real + c1.real ;
        return result ;
    }
};

class P{

    public :
    string a ; 
    void hello(){
        cout << "hello from p\n" ;
    }
};
class c : public P{
    public : 
    string a ;
    void hello(){
        cout << "hello from c\n" ;
    }
};
int main(){
    c c1;
    c1.a = 5 ;
    c1.hello();



    // complexnums n1,n2,n4,n3 ;
    // n1.real =  5; 
    // n1.imagi = 7;
 
    // n2.real =  3; 
    // n2.imagi = 1;

    // n4 = n1 + n2 ; // same as n4 = n1.operator+(n2)
    // cout << n4.real << "+ i" << n4.imagi <<endl;
    
    // n3 = n1.operator+(n2) ;
    // cout << n3.real << "+ i" << n3.imagi ;

    // n1.operator+(n2) ;
    // cb c1 ;
    // c1.func(2,3) ;
    // c1.func(2,4,5) ;

    // static allocation
    // animal a1 ;
    // a1.name = "Dog\n" ;
    // cout << a1.name ;

    // // dynamic allocation
    // animal *a2 = new animal ;

    // // (*a2).name = "cat\n" ;
    // // cout << (*a2).name ;

    // a2 -> name "Cat\n" ;
    // cout << a2 -> name ;

    // game a1("cat") ;
    // game :: lives = 5 ;
    // game :: print_lives() ;

    // cout << a1.name << endl;
    // cout << game :: lives << " \n";
    // // a1.print_name("hello");

}