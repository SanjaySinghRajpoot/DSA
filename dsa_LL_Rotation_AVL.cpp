#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	int height;
	Node* left;
	Node* right;

	Node(int val){
        data = val;
        left = NULL;
        right = NULL;
	}
};

Node* insert(Node* &root, int val){
      
	if(root == NULL)
		return new Node(val);
    
    if(root->data < val)
    	root->right = insert(root->right, val);

    if(root->data > val)
    	root->left = insert(root->left, val);

    return root;

} 

set<int> sq;

void minDif(Node* root){
   
   if(root == NULL){
    return;
   }
   
   sq.insert(root->data);
   minDif(root->left);
   minDif(root->right);
}


int cal(){

	auto k = sq.begin();
	sq.erase(sq.begin());
	auto j = sq.begin();

	return abs(*j-*k);
}

void display(Node* &root){
    
	if(root != NULL){
		display(root->left);
		cout<<root->data<<" "; 
		display(root->right);

	}
}

int main(){
  
  Node* root = NULL;

  root = insert(root, 5);

  insert(root, 5);
  insert(root, 10);
  insert(root, 5);
  insert(root, 6);
  insert(root, 7);
  insert(root, 2);

  minDif(root);

  cout<<cal()<<" -- "<<endl;
  
  display(root);
}