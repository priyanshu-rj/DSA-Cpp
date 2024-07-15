#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node(int data){
      this->data = data;
      this->next = NULL;
     }
};
void newHead(Node* &head,int d){
    Node* temp = new Node(d);
    head->next = temp;
    temp = head;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main(){ 
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    newHead(head,20);
    print(head);
    return 0;
}