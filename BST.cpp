#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
       int data;
       Node* right;
       Node* left;
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
Node* insertNode(Node* &root, int d){
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
    return root;
}

void display(Node* root) {
    if (root == NULL) {
        return;
    }

    display(root->left);
    cout << "Data: " << root->data << endl;
    display(root->right);
}

int main(){
    Node* root = NULL;
    insertNode(root,15);
    insertNode(root,10);
    insertNode(root,20);
    display(root);
    
     
    
    return 0;
}