 #include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *left, *right;

	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	} 

};

Node* searchEle(Node* root, int key){

	if(root == NULL){
		return NULL;
	}

	if(root->data == key){
		return root;
	}

	if(root->data > key){
		return searchEle(root->left, key);
	}
		
    return searchEle(root->right, key);
}

Node* inorderSucc(Node* root){
     Node* curr = root;

     while(curr && curr->left != NULL){
     	curr = curr->left;
     }

     return curr; 
}

Node* deletInBST(Node* root, int key){

	if(key < root->data){
		root->left = deletInBST(root->left, key);
	}

	else if(key > root->data){
		root->right = deletInBST(root->right, key);
	}

	else{
		//case1 and case2  
		if(root->left == NULL){
			Node* temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
		} 
		// case 3
		Node* temp = inorderSucc(root->right); 
		root->data = temp->data;
		root->right = deletInBST(root->right, temp->data);  
	}

	return root;
}

void inorderPrint(Node *root){

	if(root == NULL)
		return;
	inorderPrint(root->left);
	cout<<" "<<root->data<<" ";
	inorderPrint(root->right);
}

int main(){

    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);


   if(searchEle(root, 10) == NULL){
   	 cout<<"Element does not exist "<<endl;
   } 
   else{
   	 cout<<"Key does exist"<<endl;
   }

   inorderPrint(root);
   cout<<endl;
   root = deletInBST(root,2);
   cout<<endl;
   inorderPrint(root);

	return 0;
}