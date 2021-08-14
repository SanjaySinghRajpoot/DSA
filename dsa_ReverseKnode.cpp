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


node* recuriceReverseK(node* &head, int k){
    
    node* prevptr = NULL;
    node* currPtr = head;
    node* nextptr;

    int c=1;
    
    while(head != NULL && c<=k){
       c++;
       nextptr = currPtr->next;
       currPtr->next = prevptr;
       prevptr = currPtr;
       currPtr = nextptr;

    }

    if(nextptr != NULL){
         head->next = recuriceReverseK(nextptr,k);     
    }

    return prevptr;

}

void insertAttail(node* &head, int val){
   
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
		cout<< temp->data<< " -> " ;
		temp = temp->next;
	}
}



int main(){
  
  node* head = NULL;
  insertAttail(head, 1);
  insertAttail(head, 3);
  insertAttail(head, 4);
  insertAttail(head, 6);

  display(head);

  cout<<"---------------------"<<endl;
  node* newhead = recuriceReverseK(head,2);
  display(newhead);
  

  return 0;
}