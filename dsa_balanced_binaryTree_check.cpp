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


// int isBalanced(Node* root){
    
//     if(root == NULL)
//     	return 0;

//     int lh = isBalanced(root->left);  // check for the node and will return 1 if it exist 
//     if(lh == -1) return -1;
    
//     int rh = isBalanced(root->right);
//     if(rh == -1) return -1;

//     if(abs(lh - rh) > 1) return -1;

//     else return max(lh,rh)+1;
// }

int maxWidth(Node* root){
   //level order traversal

   if(root == NULL) return 0;

   queue<Node*> q;

   q.push(root);

   int res = 0;

   while(q.empty() == false){

      int count = q.size();
      res = max(res, count);

      for(int i=0; i<count; i++){
   
         Node *k = q.front();
         q.pop();

         if(k->left != NULL)
            q.push(k->left);
         if(k->right != NULL)
            q.push(k->right);
         
      }
   }

   return res;

}


int main(){
   
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->right = new Node(4);
   root->left->left = new Node(5);
   root->right->left = new Node(6);
   // root->right->right = new Node(7);

   // levelOrderTraversal(root);

   // sizeOf(root);

   cout<<maxWidth(root)<<endl;

   // levelOrder23(root);
   // cout<<c<<"\n size of the tree"<<endl;


	return 0;
}

