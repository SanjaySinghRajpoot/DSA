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
        temp = temp->next;
   }

   cout<<endl<<"----------"<<endl;
}

int length(node* &head){
    
    node* temp = head;
    int count = 0;
    
	if(temp->next != NULL){
		count++;
		temp = temp->next;
	}

	return count;
}

node* kappend(node* &head, int k){
  
   node* newhead;
   node* newTail;
   node* tail = head;

   int l = length(head); 
   int count = 1; 
   k = k % l;

   while(tail->next != NULL){
       if(count == l-k){
          newTail = tail;
       }
       if(count == l-k+1){
          newhead = tail;
       }

       tail = tail->next;
       count++;
   }

   newTail->next = NULL;
   tail->next = head;

   return newhead;
}

int main(){
  node* head = NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  insertAtTail(head,6);
  insertAtTail(head,7);

  
  display(head);  

  node* newhead = kappend(head, 3);
  
  display(newhead);  


  return 0;
}