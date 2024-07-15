#include<bits/stdc++.h>
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
void Add(Node* &node, int data) {
    Node* node1 = node;
    Node* temp = new Node(data);
    while (node1->next != NULL) {
         node1 = node1->next;
    }
    node1->next = temp;
}

void Print(Node* &node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main(){
    Node* node1 = new Node(5);
   Add(node1,10);
   Add(node1,25);
   Print(node1);
    return 0;
}