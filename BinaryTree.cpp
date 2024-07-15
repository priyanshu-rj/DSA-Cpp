// Online C++ compiler to run C++ program online
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
Node* insertNode(Node* &root,int d){
    if(root==NULL){
         root = new Node(d);
         return root; 
    }
    else if(root->data < d){
        root->right = insertNode(root->right,d);
    }
    else if(root->data > d){
        root->left = insertNode(root->left,d);
    }
//   return root;
}



int main() {
    Node* root = NULL;
    insertNode(root,10);
    insertNode(root,20);
    // cout << "Hello world!";
    cout<<root->right->data;
    

    return 0;
}