#include<iostream>

using namespace std;

class node{

public:
   int data;
   node* next;

   node(int val){
      data = val;
      next = NULL; 
   }

};


void insertAtTail(node* &head, int val){

   node* n = new node(val); // new node created

   if(head == NULL){ 
      head = n;
      return;
   }

   node* temp = head;

   while(temp->next != NULL){
   	temp = temp-> next;
   }

   temp->next = n;

}

void display(node* head){

	node* temp = head;

	while(temp != NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
	}

	cout<<endl;
}

node* recuriceReverse(node* &head){   // O(n) time complexity
    
    if(head == NULL || head->next == NULL){
       return head;
    }

    node* newhead1 = recuriceReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead1;
 }

node* reverse(node* &head){
   node* prevptr = NULL;
   node* currPtr = head;
   node* nextptr;

   while(currPtr != NULL){
      nextptr = currPtr->next;
      currPtr->next = prevptr;

      prevptr = currPtr;
      currPtr = nextptr; 
   }

   return prevptr;
}


int main(){
  
  node* head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  display(head);
  cout<<endl;
  
  node* newhead = reverse(head);
  display(newhead);

  cout<<endl;

  node* newhead1 = recuriceReverse(newhead);
  display(newhead1);

	return 0;
}