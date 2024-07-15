// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
        public:
        int data;
        Node* next;
    Node(int data){
       this ->data = data;
       this ->next = NULL;
    }
};
void Add(Node* &head, int d){
     Node* temp = new Node(d);
     head->next = temp;
}
void print(Node* &head){
    Node* temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void Add1(Node* &head,int d){
    Node* temp1 = head ;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }  
    Node* new1 = new Node(d);
    temp1->next = new1;
    
}


int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Add(head,20);
    print(head);
    Add1(head,30);
    print(head);
    return 0;
}