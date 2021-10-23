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

void swap(int *a, int *b){
    int temp = *a;
    *a  = *b;
    *b = temp;
}

void calcPointers(node* root,  node** first, node** mid, node** last, node** prev){
     
   if(root == NULL){
       return;
   }

   calcPointers(root->left, first, mid, last, prev);
   
   if(*prev && root->data < ((*prev)->data)){
    
      if(!*first){
          *first = *prev;
          *mid = root;
      }
      else{
        *last = root;
      }
   }
   
   *prev = root;
   calcPointers(root->right, first, mid, last, prev);
}


void restoreBST(node* root){
	node *first, *mid, *last, *prev;
    first = mid = last = prev = NULL;

    calcPointers(root, &first, &mid, &last, &prev);
    
    // case 1 - when two swap elments are not adjacent
    if(first && last){
        swap(&(first->data), &(last->data));
    }


    // case 2 - adjacent elements 
    else if(first && mid){
        swap(&(first->data), &(mid->data));
    }
}

void inorder(node* root){ 
   
   if(root == NULL){  // try to mention the base contition for the recursive cases 
     return;
   }

   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

int main(){

    // int x = 9;
    // int *ptr = &x;   // ptr = address of anything   * -> value at that address
    
   
    // cout<<"ptr -> "<<ptr<<endl;
    // cout<<"*ptr -> "<<*ptr<<endl;

    // int **p_ptr =  &ptr;

    // cout<<"**p_ptr -> "<<p_ptr<<endl;
    // cout<<"**p_ptr+1 -> "<<p_ptr+1<<endl;

    // cout<<"*p_ptr -> "<<*p_ptr<<endl;   // watch closely *p_ptr is not present 
    // cout<<"*p_ptr+1 -> "<<*p_ptr+1<<endl;   // watch closely *p_ptr is not present 
    
    // int q[10];

    // cout<<"q -> "<<q<<endl;
    // cout<<" &q[0] -> "<<&q[0];


    node* root = new node(6);
    root->left = new node(9);
    root->right = new node(3);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->right->right = new node(13); 

    inorder(root);
    cout<<endl;

    restoreBST(root);

    inorder(root);

    cout<<endl;

    return 0;
}