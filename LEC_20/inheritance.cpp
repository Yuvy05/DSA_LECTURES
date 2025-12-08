#include<bits/stdc++.h>
using namespace std ;

class animals{
    private :
    int speed ;
    int legs ;

    protected : 
    void set_legs(int a){
        legs = a ;
    }
    public :
    int get_legs(){
        return legs ;
    }
    animals(){
        cout << "Animals called\n" ;
    }

};
class dog : private animals{     //dog is child classs , animals is parent class
    public :
    void bark(){

        cout <<"bhaao\n" ;
    }
    void set_animal_legs(int a){
        set_legs(a) ;
    }
    int get_animal_legs(){
        return get_legs() ;
    }
    dog(){
        cout <<"dogs called\n" ;
    }
};
class cat{
    public :
    cat(){
        cout << "cat is called\n" ;
    }
};
class puppy : public dog, public cat{
    public : 
    void check(){
        bark() ;
        set_animal_legs(20);
    }
    puppy(){
        cout <<"puppy is called\n" ;
    }
}; 

int main(){
    //dog d1 ;
    puppy p;


    // d1.set_animal_legs(10) ;
    // cout << d1.get_animal_legs() << endl ;
    // d1.bark() ;

} 