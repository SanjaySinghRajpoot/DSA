#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int data){
         val = data;
         left = NULL;
         right = NULL;
    }
};

vector<int> sq,sp;

void LowestCAq(Node* root, Node* p, Node* q){
    

    if((root->left == NULL || root->right == NULL) && ((root->val != q))){
        sq.clear();        
    }
    
    sq.push_back(root->val);
    LowestCA(root->left, p, q);    
    LowestCA(root->right, p, q);
}

void LowestCAp(Node* root, Node* p, Node* q){
    

    if((root->left == NULL || root->right == NULL) && ((root->val != p))){
        sp.clear();        
    }
    
    sp.push_back(root->val);
    LowestCA(root->left, p, q);    
    LowestCA(root->right, p, q);
}



int main(){

  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  
  LowestCA(root, root->left->left, root->left->right);
}


