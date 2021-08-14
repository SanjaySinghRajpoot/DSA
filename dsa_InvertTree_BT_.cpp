#include<bits/stdc++.h>

using namespace std;

struct Node{
     int data;
     Node* left;
     Node* right;

     Node(int val){
         data = val;
         left = NULL;
         right = NULL;
     }
};

Node* invertree(Node* root){
   
   if(root == NULL) return root;

   Node* lp = invertree(root->left);
   Node* rp = invertree(root->right);
   
   cout<<root->data<<" ";

   Node* temp = root->left;
   root-> left = root-> right;
   root->right = temp;
   
   return root;
}

int main(){
   Node* root = new Node(1);
   root->right = new Node(2);
   root->left = new Node(3);
   root->right->left = new Node(4);
   root->right->right = new Node(5);
   root->left->right = new Node(7);
   root->left->left = new Node(8);
   
    invertree(root);

	return 0;
}