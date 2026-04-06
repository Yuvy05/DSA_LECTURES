#include<bits/stdc++.h>
using namespace std ;
class Node{
    public  :
    int val ; 
    Node *right ;
    Node *left ;
    
    Node(){
        left = NULL ;
        right =NULL ;
        val = 0 ;
    }
    Node(int data){
        val = data ;
        left = NULL ;
        right =NULL ;
    }
    Node(int data , Node *l , Node *r){
        val = data ;
        left = l ;
        right =r ;
    }

};
Node *treeConstruct(int n , vector<int> v , int idx){
    if(idx > n-1){
        return NULL ;
    }
    if(v[idx] == -1){
        return NULL ;
    }
    Node *curr = new Node() ;
    
    curr -> val = v[idx] ;

    curr -> left = treeConstruct(n , v , 2*idx + 1) ;
    curr -> right = treeConstruct(n , v , 2*idx + 2) ;
    return curr ;
}
void traverse(Node *root){
    queue<Node*> q ;
    q.push(root) ;
    while(q.size()){
        int sz = q.size() ;
        
        for(int i = 0 ; i < sz ; i++){
            Node* curr = q.front() ;
            cout << curr -> val << " " ;
            q.pop() ;
            if(curr -> left != NULL)
            q.push(curr -> left );
            if(curr -> right != NULL)
            q.push(curr -> right) ;
        }
    }

}
int main(){
    int n = 7 ;
    vector<int> v = {1,2,3,4,5,6,7} ;
    Node* root = treeConstruct(n , v , 0) ;
    traverse(root) ;
    return 0 ;
}