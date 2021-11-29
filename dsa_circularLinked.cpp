#include<bits/stdc++.h>

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

void insertAtHead(node* &head, int val){
	node* n = new node(val); // create a new node and assign its value to the node
   
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    
    node* temp = head;

	while(temp->next != head){
       temp = temp->next;
	} // to reach the end of linked list 

	temp->next = n;   // n has to be added
	n->next = head;
	head = n;
}

void insertAtTail(node* &head, int val){
   
   if(head == NULL){
     insertAtHead(head, val);
     return;							
   }

   node* n = new node(val);
   node* temp = head;

   while(temp->next != head){
        temp = temp->next;
   } 

   temp->next = n;
   n->next = head;
   
}

void delteAthead(node* &head){
    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deletion(node* &head, int pos){
   
   if(pos == 1){
     delteAthead(head);
     return;
   }

   node* temp = head;
   int count = 1;

   while(count != pos-1){    // one before deleted node
      temp = temp -> next;
      count++;
   }

   node* todelete = temp->next;
   temp->next = temp->next->next;  // to point to the next of delete node  

   delete todelete;
}


void display(node* head){
   
   node* temp = head;

   do{                         // using do while beacuse 
       cout<<temp->data<<" ";
       temp = temp->next;

   }while(temp != head);

   cout<<endl;
}

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 8);
    display(head);
    deletion(head, 4);
    display(head);
    

    return 0;
}