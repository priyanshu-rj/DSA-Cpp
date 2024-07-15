// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
     int data;
     Node* next;
     Node(int data){
         this->next = NULL;
         this->data = data;
     }
};
void insert(Node* head,int point){
    Node* temp = head;
    Node* pnt = new Node(point);
    if(head->next == NULL){
        head->next = pnt;
    }
    else{
    while(temp->next!=NULL){
          temp = temp->next;
             }
           temp->next = pnt;
        }
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


void reverse(Node* &head){
    Node* crnt = head;
    Node* prev = NULL;
    Node* after = NULL;
    while(crnt!=NULL){
        after = crnt->next;
        crnt->next = prev;
        prev = crnt;
        crnt = after;
    }
    head = prev;
}




int main() {
    Node* head = new Node(10);
//   cout<<head->data;
   insert(head,20);
  insert(head,30);
  insert(head,40);
   display(head);
   cout<<endl;
  reverse(head);
  display(head);
    return 0;
}