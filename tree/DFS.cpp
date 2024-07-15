// using stck// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
     public:
     int data;
     Node* right;
     Node* left;
     Node(int data){
         this->data=data;
         this->right=NULL;
         this->left=NULL;
     }
};
void DFS(Node* &root){
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* NEW = s.top();
         cout<<NEW->data<<" ";
         s.pop();
        if(NEW->right!=NULL){
            s.push(NEW->right);
        }
        if(NEW->left!=NULL){
            s.push(NEW->left);
        }
    }
}


int main() {
    Node* root = new Node(20);
    root->right = new Node(15);
    root->left = new Node(25);
    root->right->left = new Node(30);
    root->right->right = new Node(40);
    DFS(root);
    return 0;
}