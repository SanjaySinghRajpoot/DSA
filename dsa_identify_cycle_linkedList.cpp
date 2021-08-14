#include<iostream>

using namespace std;

// code to identify a cycle in a linked list 

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
          n = head;
          return;
     }

     node* temp = head;
     
     while(temp != NULL && temp->next != NULL){
     	temp = temp->next;
     }
     
     temp->next = n;
}

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count = 1;

    while(temp->next != NULL){
       
       if(count == pos){
          startNode = temp;
       }

       temp = temp->next;
       count++;
    }

    temp->next = startNode;
}

void display(node* head){

    node* temp = head;

    while(temp != NULL){
      cout<< temp->data <<" -> ";
      temp = temp-> next;
    }

    cout<<endl;
}

bool detectCycle(node* &head){
   node* slow = head;
   node* fast = head;

   while(fast != NULL && fast->next != NULL){
     slow = slow->next;
     fast = fast->next->next;

     if(fast == slow){
       return true;
     }
   }

   return false;
}


void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;

    do{
        slow = slow->next;
        fast = fast->next->next;

    }while(slow != fast);

    fast = head;

    while(fast != slow){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;

}


int main(){
  node* head;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  insertAtTail(head,6);
  
  makeCycle(head,3);

  display(head);
 
  removeCycle(head);
  
  if(detectCycle(head)){
    cout<<"Yes cycle present";
  }else{
    cout<<"No its not";
  }

  return 0;
}