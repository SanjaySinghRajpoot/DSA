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

// placing all the even nodes before the odd nodes 

void insertAtTail(node* &head, int val){

	node* n = new node(val);

	if(head == NULL){
      head = n;
      return;
	}

	node* temp = head;

	while(temp->next != NULL){
        temp = temp->next;
	}

	temp->next = n;
}

void display(node* &head){
    
    node* temp = head;

    while(temp != NULL){
    	cout<<temp->data<<" -> ";
    	temp = temp -> next;
    }

    cout<<"NULL"<<endl;
} 


void oddeven(node* &head){

   node* odd = head; 
   node* even = head->next;
   node* evenStart = even;

   while(odd->next != NULL && even->next !=NULL){
       odd->next = even->next;
       odd = odd->next;

       even->next = odd->next;
       even = even->next;
   }

   odd->next = evenStart;  //  to point the last odd node to even first node

   if(odd->next != NULL){
       even->next = NULL;
   }
}

int main(){
   
   node* head = NULL;
   insertAtTail(head, 1);
   insertAtTail(head, 2); 
   insertAtTail(head, 3); 
   insertAtTail(head, 4); 
   insertAtTail(head, 5); 
   insertAtTail(head, 6);
   
   display(head);
   
   oddeven(head);
   
   display(head);

}