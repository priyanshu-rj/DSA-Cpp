
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void Delete(Node* &head, Node* &node3){
    Node* del = node3;
    Node* temp = head;
    while(temp->next!=node3){
        temp = temp->next;
    }
    // cout<<temp->data<<endl; = 20
    temp->next = node3->next;
    
    // cout<<node3->next->data;
    delete node3;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    Node* head = new Node(10);
    Node* node1 = new Node(20);
    head->next = node1;
    Node* node2 = new Node(30);
    node1->next = node2; 
    Node* node3 = new Node(40);
    node2->next = node3; 
    Delete(head,node1);
    print(head);
    
    return 0;
}