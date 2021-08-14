#include<bits/stdc++.h>

using namespace std;


struct Node {
	int data;
	Node* right;
	Node* left;

	Node(int val){
        data = val;
        right = NULL;
        left = NULL;
	}
};

// to check if 2 BST are identical or not 

bool checkBST(Node* root1, Node* root2){
         
     if(root1 == NULL && root2 == NULL){
         return true;
     }
 
     else if(root1 == NULL || root2 == NULL){
         return false;                     
     }

     else{
         
        bool cond1 = root1->data == root2->data;
        bool cond2 = checkBST(root1->left, root2->left); 
        bool cond3 = checkBST(root1->right, root2->right); 
       
		if(cond1 && cond2 && cond3){
			return true;
		}
     }

     return false;
}


int main(){
	Node* root1 = new Node(1);
	root1->right = new Node(3);
	root1->right->left = new Node(2);
	root1->right->right = new Node(5);

	Node* root2 = new Node(1);
	root2->right = new Node(3);
	root2->right->left = new Node(2);
	root2->right->right = new Node(5);


    if(checkBST(root1,root2)){
    	cout<<"Yes "<<endl;
    }
    else{
    	cout<<"No"<<endl;
    }


	return 0;
}