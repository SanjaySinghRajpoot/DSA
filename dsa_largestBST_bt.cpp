#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left, *right;

	node(int val){
       data = val;
       left = NULL;
       right = NULL;
	}
};

struct Info{
   int size;
   int max;
   int min;
   int ans;
   bool isBST;
};

Info largestBST(node* root){
     if(root == NULL){
     	  return {0, INT_MIN, INT_MAX, 0, true};    // setting up values
     }

     if(root->left == NULL && root->right == NULL){
     	  return {1, root->data, root->data, true};   
     }
     
     Info leftinfo = largestBST(root->left);
     Info rightinfo = largestBST(root->right); 

     Info curr;
     curr.size = (1 + leftinfo.size + rightinfo.size);

     //  check for a valid BST
     if(leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data){
          curr.min = min(leftinfo.min, min(rightinfo.min, root->data));
          curr.max = max(rightinfo.max, max(rightinfo.max, root->data));

          curr.ans = curr.size;
          curr.isBST = true;

          return curr;
     }

     curr.ans = max(leftinfo.ans, rightinfo.ans);
     curr.isBST = false;
     return curr;
}

int main(){
   node* root = new node(15);
   root->left = new node(20);
   root->right = new node(30);
   root->left->left = new node(5);
   

   cout<<"largest BT in a bst "<<largestBST(root).ans<<" min "<<largestBST(root).max<<endl;


    return 0;
}