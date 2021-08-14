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


void display(node* head){
   
   node* temp = head;  

   while(temp != NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
   }
}


void insertAtHeadTail(node* &head, int val){
   
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


void intersect(node* &head1, node* &head2, int pos){
   
   node* temp1 = head1;
   pos--;

   while(pos--){
   	 temp1 = temp1->next;
   }

   node* temp2 = head2;

   while(temp2->next != NULL){
      temp2 = temp2->next;
   }
   
   display(head1);

   temp2->next = temp1;
}

int length(node* head){
  
   node* temp = head;
   
   int count = 0;

   while(temp != NULL){
   	  count++;
   	  temp = temp->next;
   }

   return count;
}


int intersesction(node* &head1, node* &head2){

	int l1 = length(head1);
	int l2 = length(head2);

	int d = 0;
	node* ptr1;
	node* ptr2;
    
    if(l1 > l2){
    	d = l1 -l2;
    	ptr1 = head1;
    	ptr2 = head2;
    }
    else{
    	d = l2 - l1;
    	ptr1 = head2;
    	ptr2 = head1;
    }
	
	while(d){
		ptr1 = ptr1 -> next;
		if(ptr1 == NULL){
           return -1;
		}
		d--;
	}

	while(ptr1 != NULL && ptr2 != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if(ptr1->data == ptr2->data){
        	return 1;
        	break;
        }

	}
   
   return 0;

 }

int main(){ 
    
    node* head = NULL;
    node* head2 = NULL;
    
    insertAtHeadTail(head, 3);
    insertAtHeadTail(head, 6);
    insertAtHeadTail(head, 2);
    insertAtHeadTail(head, 9);
    insertAtHeadTail(head2, 4);
    insertAtHeadTail(head2, 11);

    intersect(head, head2, 3);
    display(head);
    cout<<endl<<endl;
    display(head2);

    cout<<endl<<intersesction(head,head2)<<endl;

	return 0;
}

