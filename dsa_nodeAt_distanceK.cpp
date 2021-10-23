#include<bits/stdc++.h>

using namespace std;

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

// case 1
void printNodeAt(Node* root, int k){
   
   if(root == NULL || k<0){
   	return;
   }

   if(k == 0){
   	  cout<< root->data<<" ";
   	  return;
   }

   printNodeAt(root->left, k = k-1);
   printNodeAt(root->right, k = k-1);

}

//case 2
int 


int main(){
    
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    
    return 0;

}
















