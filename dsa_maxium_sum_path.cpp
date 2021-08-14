#include<bits/stdc++.h>

using namespace std;

struct node{
    
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int maxSumPathUtile(node* root, int &ans){
	
      if(root == NULL){
      	return 0;
      }

      int left = maxSumPathUtile(root->left, ans);
      int right = maxSumPathUtile(root->right, ans);

      int nodemax  = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));

      ans = max(ans, nodemax);

      int singlePathSum  = max(root->data, max(root->data + left, root->data + right));
      return singlePathSum;
}


int maxPathSum(node* head1){
  
   int ans = INT_MIN;
   maxSumPathUtile(head1, ans);
   return ans;
}


int main(){
    
    node* head = new node(1);
    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->right = new node(5);
    
    cout<<maxPathSum(head);

  
	return 0;
}