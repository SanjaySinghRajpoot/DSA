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

void zigzagTraversal(Node* root){

   if(root == NULL){
      return;
   }

   stack<Node*> currLevel;
   stack<Node*> nextLevel;

   bool leftToRight = true;

   currLevel.push(root);

   while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp){
          cout<< temp->data << " ";

        if(leftToRight){
          if(temp->left){
              nextLevel.push(temp->left);
          }

          if(temp->right){
             nextLevel.push(temp->right);
          }
        }

        else{
          if(temp -> right){
            nextLevel.push(temp->right);
          }

          if(temp -> left){
            nextLevel.push(temp->left);
          }
        }

      }


      if(currLevel.empty()){
         leftToRight = !leftToRight;
         swap(currLevel, nextLevel);
      }
   }
}

int main(){

  /*  print its zig zag pattern
       12
      /  \
     9   15
    / \
   5  10
   
 */
   
   Node* root = new Node(12);
   root->left = new Node(9);
   root->right = new Node(15);
   root->left->left = new Node(5);
   root->left->right = new Node(10);

   zigzagTraversal(root);
   cout<<endl;
   return 0;

}