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


void levelOrderTraversal(Node* root){
   
   if(root == NULL) return;

   queue<Node*> q;

   q.push(root);

   while(q.empty() == false)
   {
     Node* curr  = q.front();

     q.pop();

     cout<<curr->data<<" ";

     if(curr->left != NULL)
        q.push(curr->left);
     if(curr->right != NULL)
        q.push(curr->right);
   } 

}

int c = 0;

void sizeOf(Node* root){
   
   if(root == NULL)
      return;

   c++;

   sizeOf(root->left);
   sizeOf(root->right);
  
}



// void levelOrder23(Node* root){
   
//    if(root == NULL) return;

//    queue<Node*> q;

//    q.push(root);

//    while(q.empty() == false){

//       Node* k = q.front();
//       q.pop();
      
//       cout<<k->data<<" - ";

//       if(k->left != NULL)
//           q.push(root->left);
//       if(k->right != NULL)
//           q.push(root->right);

//    }

// }


int main(){
   
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->right = new Node(4);
   root->left->left = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);

   levelOrderTraversal(root);

   sizeOf(root);

   // levelOrder23(root);
   cout<<c<<"\n size of the tree"<<endl;


	return 0;
}

