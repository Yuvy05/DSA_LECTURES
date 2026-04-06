#include<bits/stdc++.h>
using namespace std ;
#include<bits/stdc++.h>
using namespace std ;
class node{

    public :  
    int data ;
    node *left ;
    node *right ;

    node(){
        data = 0;
        left = NULL ;
        right = NULL ;
    }
    node(int val){
        data = val ;
        left = NULL ;
        right = NULL ;
    }
    node(node *left , node *right , int val ){
        data = val ;
        this -> left = left ;
        this -> right = right ;
    }
};
bool traverse(node* root , int val){
    if(root == NULL){
        return false ;
    }
    if(root -> data == val){
        cout << "found \n" ;
        return true;
    }

    bool foundleft = traverse(root -> left , val) ;
    bool foundright = traverse(root -> right,val) ;
    return foundleft or foundright ;
       
}
int main(){
    node *root = new node(1) ;
    root -> left = new node(2) ;
    root -> right = new node(3) ;

    root -> left -> left = new node(4) ;
    root -> left -> right = new node(5) ;
     
    root -> right -> left = new node(6) ;
    root -> right -> right = new node(7) ;

    cout << traverse(root , 5) ;
}