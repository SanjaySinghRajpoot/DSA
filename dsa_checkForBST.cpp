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


bool checkBST(Node* root, Node* min, Node* max){
	 
	 if(root == NULL){   // ??
	 	return true;
	 }


    if(min != NULL && root->data <= min->data){  // consider min and max
         return false;
    }

    if(max != NULL && root->data >= max->data){
         return false;
    }

    bool leftValid = checkBST(root->left, min, root);
    bool rightValid = checkBST(root->right, root, max);
  
   return leftValid and rightValid;
}


int main(){
   Node* root = new Node(5);
   root->left = new Node(2);
   root->right = new Node(8);

 
   if(checkBST(root, NULL, NULL)){
   	 cout<<" valid BST "<<endl;
   }
   else{
   	 cout<<" NOT valid "<<endl;
   }

	return 0;
}