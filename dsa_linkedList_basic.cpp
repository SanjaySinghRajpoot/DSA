#include<bits/stdc++.h>

using namespace std;

class Node {
   public:
     int val;
     Node* next;

     Node(int data){
         val = data;
         next = NULL;
     }
};

int main(){
   // inilialize the nodes in the heap
   Node* head;
   Node* one = new Node(1);
   Node* two = new Node(2);
   Node* three = new Node(3);
   
//    //assign them values
//    one->val = 1;
//    two->val = 2;
//    three->val = 3;

   // direction assigned
   one->next = two;
   two->next = three;
   three->next = NULL;
   
   head = one;

   while(head != NULL){
       cout<<head->val<<endl;
       head = head->next;
   }

}