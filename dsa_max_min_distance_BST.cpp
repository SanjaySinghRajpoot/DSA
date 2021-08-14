// #include<bits/stdc++.h>

// using namespace std;

// class node{
// public:
// 	int data;
// 	node* next;

// 	node(int val){
//        data = val;
//        next = NULL;
// 	}
// };


// void insertAtTail(node* &head, int val){
   
//    node* n = new node(val);

//    if(head == NULL){
//    	  head = n;
//    	  return;
//    }

//    node* temp = head;

//    while(temp->next != NULL){
//    	 temp = temp->next;
//    }

//    temp->next = n;
// }


// void display(node* &head){
   
//    node* temp = head;

//    while(temp != NULL){
//    	 cout<<temp->data<<" -> ";
//    	 temp = temp->next;
//    }
// }


// int main(){
//     node* head = NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,3);
//     insertAtTail(head,5);
//     insertAtTail(head,7);
//     insertAtTail(head,9);
    
//     display(head);

// 	return 0;
// }


#include<bits/stdc++.h>

using namespace std;

struct node{
     int data;
     node* left, *right;

     node(int val){
        data = val;
        left  = NULL;
        right = NULL;
     }
};

int main(){
   node* root = new node();
   


	return 0;
}

