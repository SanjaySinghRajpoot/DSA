#include<bits/stdc++.h>

using namespace std;

struct node{
  int data;
  node* right;
  node* left;

  node(int val){
    data = val;
    right = NULL;
    left = NULL;
  }

};


void verticalTree(node* root, int dist, map<int,vector<int>> &mp){


	if(root == NULL){
		return; 
	}

	mp[dist].push_back(root->data);

	verticalTree(root->left, dist-1, mp);
	verticalTree(root->right, dist+1, mp);

}


int main(){
    node* root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);

    map<int,vector<int>> mp;


    verticalTree(root,0, mp);
    

    for(auto it = mp.begin(); it != mp.end(); it++){
      
      for(int i=0; i<(it->second).size(); i++){
         cout<< (it->second)[i] << " ";
      }  

      cout<<endl;     
   }

	return 0;
}