#include<iostream>

using namespace std;

class node{
public:
	int data;
	node* next;
	node* previous;

	node(int val){
      data = val;
      next = NULL;
      previous = NULL; 
	}
};

void insertAtHead(node* &head, int val){
  
  node* n = new node(val);
  n->next = head;
   
   if(head != NULL){
      head->previous = n;  // previous to point at the node
   }

   head = n;
}

void insertAtTail(node* &head, int val){

	node* n = new node(val);

	if(head == NULL){
    insertAtHead(head, val);
		return;
	}

  node* temp = head;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = n;
  n->previous = temp;
}

void delteAthead(node* &head){
  
  node* todelete = head;
  head = head->next;
  head->previous = NULL;

  delete todelete;
}


void deletion(node* &head, int pos){

	if(pos == 1){
     delteAthead(head);
     return;
	}
  
  node* temp = head;
  int count = 1;

  while(temp != NULL && count != pos){
     temp = temp->next;
     count++;
  }

  temp->previous->next = temp->next;

  if(temp->next != NULL){
    temp->next->previous = temp->previous; 
  }

  delete temp;
}

void display(node* &head){

  node* temp = head;

	while(temp != NULL){
		cout<< temp->data<<" <--> ";
		temp = temp->next; 
	}

	cout<<endl;
}

int main(){
  
  node* head = NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  display(head);
  insertAtHead(head,5);
  display(head);

  deletion(head,1);   // head and node to be deleted  3 functions call 
  display(head);
  

  return 0;
}