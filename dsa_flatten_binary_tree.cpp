#include<bits/stdc++.h>

using namespace std;


// flaten a binary tree, into linked list in-place. After flateing all the left node 
// should point to null and the right node should be arranged in the preorder sequence 

struct Node 
{
	int data;
	Node *right, *left;

	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

void inorderPrint(Node* root){
   
   if(root == NULL){
   	  return;
   }

   inorderPrint(root->left);
   cout<<" "<<root->data;
   inorderPrint(root->right);
}

void flaten(Node* root){
	
   if(root == NULL || (root->left == NULL && root->right == NULL)){
   	    return;
   }

	if(root->left != NULL){
		 flaten(root->left);

		 Node* temp = root->right;
		 root->right = root->left;
		 root->left = NULL;

		 Node* t = root->right;

		 while(t->right != NULL)
		 {
		 	t = t->right; 
		 }

		 t->right = temp;
	}

	flaten(root->right);
}


int main(){
    
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);


    cout<<"The latten tree is "<<endl;
    flaten(root);
    inorderPrint(root);
    cout<<endl;
    
    return 0;

}