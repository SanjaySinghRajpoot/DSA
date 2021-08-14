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
      temp = temp-> next;
   }

   cout<<endl;
}


// void mergeLinkList(node* &head, node* &head1){
   
//     node* temp = head;
//     node* temp1 = head1;
//     node* merge_LL = new node(-1); 

//     if(temp == NULL && temp1 == NULL){
//    	    return;
//     }

//    while(temp != NULL && temp1 != NULL){
   
//    	  if(temp->data > temp1->data){
//           insertAtTail(mergeLL, temp1->data);
//           temp1 = temp1->next;
//    	  }

//    	  else{
//           insertAtTail(mergeLL, temp->data);
//           temp = temp->next;
//    	  }
//    }

//    display(mergeLL);
// }

// node* merge(node* &head1, node* &head2){

// 	node* p1 = head1;
// 	node* p2 = head2;
// 	node* dummyNode = new node(-1);
// 	node* p3 = dummyNode;

// 	while(p1 != NULL && p2 != NULL){
       
//        if(p1->data < p2->data){
//            p3->next = p1;
//            p1 = p1->next;
//        }
//        else{
//        	 p3->next = p2;
//        	 p2 = p2->next;
//        }

//        p3 = p3->next;
// 	}

// 	while(p1 != NULL){
//         p3->next = p1;
//         p1 = p1 -> next;
//         p3 = p3 -> next;
// 	}

// 	while(p2 != NULL){
//         p3->next = p1;
//         p2 = p2 -> next;
//         p3 = p3 -> next;
// 	}

// 	return dummyNode->next;
// }

node* mergeRecurive(node* &head1, node* head2){

   if(head1 == NULL){
       return head2;
   }

   if(head2 == NULL){
       return head1;
   }

   node* result;

   if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecurive(head1->next, head2);
   }

   else{
      result = head2;
      result->next = mergeRecurive(head1, head2->next);
   }

   return result;
}


int main(){
   
   node* head = NULL;
   insertAtTail(head,1);
   insertAtTail(head,4);
   insertAtTail(head,5);
   insertAtTail(head,7);
   insertAtTail(head,9);
   display(head);
   cout<<"----------------"<<endl;
   
   node* head1 = NULL;
   insertAtTail(head1, 2);
   insertAtTail(head1, 3);
   insertAtTail(head1, 6);
   
   display(head1);
   cout<<"----------------"<<endl;
   

   node* newhead = mergeRecurive(head, head1);
   
   display(newhead);

	return 0;
}