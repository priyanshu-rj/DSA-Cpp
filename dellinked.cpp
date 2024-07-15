#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data =data;
        this->next =NULL;
    }
};
void AddNode(Node* &head, int d){
    Node* temp = new Node(d);
    head->next = temp;
}

void Print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void add(Node* &head,int p){
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(p);
    temp->next = newNode;
}


void del(Node* &head){
     Node* temp = head;
     while(temp->next->next!=NULL){
     temp=temp->next;
        }
     delete temp->next;
     temp->next = NULL;
}

int main(){
    Node* data1 = new Node(10);
    Node* head = data1;
    // Print(head);
    AddNode(head,20);
    add(head,30);
    del(head);
    Print(head);
    return 0;
    
}