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


//  TIME COMPLEXITY FOR TRAVERSAL -> O(N)
//  SPACE COMPLEXITY FOR TRAVERSAL -> O(1)
void preorderTraversal(node* root){
    // current left right
    if(root == NULL){
        return ;
    }
    cout << root -> data << " " ;
    preorderTraversal(root -> left) ;
    preorderTraversal(root -> right) ;
}

void postorderTraversal(node* root){
    if(root == NULL){
        return ;
    }
    postorderTraversal(root -> left) ;
    postorderTraversal(root -> right) ;
    cout << root -> data << " " ;

}

void inorderTraveresal(node* root){
    if(root == NULL){
        return ;
    }
    inorderTraveresal(root -> left) ;
    cout << root-> data <<" " ;
    inorderTraveresal(root -> right) ;
}
void levelOrderTraversal(node * root){
    queue<node*>q;
    q.push(root) ;
    int level = 0 ;
    while(q.size() != 0){
        int sz = q.size() ;
        // queue<node*> newq ;
        cout << " level "<< level << " : " ;
        for(int i =0 ; i<sz ; i++){
            node* curr = q.front() ;
            q.pop() ;
            cout << curr -> data << " " ;
            if(curr -> left != NULL)
            q.push(curr -> left) ;
            if(curr -> right != NULL)
            q.push(curr -> right) ;
        }
        cout << endl ;
        level++ ;
    }
}
node* deleteLeaf(node *root){
    if(root == NULL){
        return root ;
    }

    if(root -> left == NULL and root -> right == NULL){
        delete root ;
        return NULL ;
    }

    root -> left = deleteLeaf(root -> left) ;
    root -> right = deleteLeaf(root -> right) ;

    return root ;
}
int main(){
    node *root = new node(1) ;
    root -> left = new node(2) ;
    root -> right = new node(3) ;

    root -> left -> left = new node(4) ;
    root -> left -> right = new node(5) ;
     
    root -> right -> left = new node(6) ;
    root -> right -> right = new node(7) ;
    
    // preorderTraversal(root) ;
    // cout << endl ;
    // postorderTraversal(root) ;
    // cout << endl ; 
    // inorderTraveresal(root) ;
    // cout << endl ; 
    levelOrderTraversal(root) ;
    cout << endl ;

    root = deleteLeaf(root) ;

    levelOrderTraversal(root) ;
    cout << endl ;

}

