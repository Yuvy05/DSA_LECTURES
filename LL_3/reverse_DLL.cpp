#include<bits/stdc++.h>
using namespace std ;
class node{
    public :
    int data ;
    node* next ;
    node* prev ;
    node(int data){
        this -> data = data ;
        next = NULL ;
        prev = NULL ;
    }
    node(int data , node* next , node* prev){
        this -> data = data ;
        this -> next = next ;
        this -> prev = prev ;
    }
};

// DLL into stack then pop
pair<node* , node*> insertAtBeg(node* head , node* tail , int data) {
    node* newNode = new node(data) ;
    if(head == NULL){
        head = tail = newNode ;
        return {head , tail};
    }
    newNode -> next = head ;
    head -> prev = newNode ;
    head = newNode ;
    return {head , tail} ;

}

// TC -> O(N) SC -> O(N)
node* reverse_DLL_stack(node* head){
    stack<int> st ;
    node* curr = head ;
    if (curr == NULL || curr -> next == NULL){
        return head ;
    }
    curr = head ;
    while(curr != NULL){
        st.push(curr -> data) ;
        curr = curr -> next ;
    }
    curr = head ;
    while (curr != NULL){
        curr -> data = st.top() ;
        st.pop() ;
        curr = curr -> next ;
    }
    return head ;
}

node* reverse_DLL_opt(node* head){
    node* curr = head ;
    node* last = NULL ;
    if (curr == NULL || curr -> next == NULL){
        return head ;
    }
    node* temp = NULL;
    node* temp2 = NULL ;
    while (curr != NULL){
        temp2 = curr;
        temp = curr -> next ;
        curr -> next = curr -> prev ;
        curr -> prev = temp ;
        curr = curr -> prev ;
    }
    return temp2  ;
}

void traverse(node* head){
    node* curr = head ;
    while(curr != NULL){
        cout << curr ->  data << " ";
        curr = curr -> next ;
    }
    cout << endl ;
}
int main(){
    pair<node* , node*> p ;
    p = insertAtBeg(NULL , NULL , 5) ;

    p = insertAtBeg(p.first , p.second , 4) ;

    p = insertAtBeg(p.first , p.second , 3) ;

    p = insertAtBeg(p.first , p.second , 2) ;

    p = insertAtBeg(p.first , p.second, 1) ;

    traverse(p.first) ;

    node* temp ;
    // temp = reverse_DLL_stack(p.first) ;

    // traverse(p.first) ;

    temp = reverse_DLL_opt(p.first) ;

    traverse(temp);


}