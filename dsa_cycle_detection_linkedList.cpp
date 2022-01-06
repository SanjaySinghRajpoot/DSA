#include<bits/stdc++.h>

using namespace std;

class node{
  public:
    int val;
    node* next;

    node(int data){
        val = data;
        next = NULL;
    }
};

node* insertatTail(node* &root, int val)
{
    node* temp = new node(val);

    if(temp == NULL){
        temp = root;
        return temp;
    }

    node* temp1 = root;

    while(temp1 != NULL){
        temp1 = temp1->next;
    }

    temp1->next = temp;
}

void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;

    int cnt = 1;

    while(temp->next != NULL){

        if(temp->val == pos){
             cnt++;
        }
    }

    startNode = head;
    
    while(cnt--){
       startNode = startNode->next;
    }

   temp->next = startNode;
   
}

void cycledetection(node* root){
        
        node* temp = root;
        node* slow = temp;
        node* fast = temp;

        while (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast){
                cout<<"cylce detected"<<endl;
                return;
            }
        }
        
}

int main()
{
    node* head;
    insertatTail(head, 1);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);

    makeCycle(head, 3);

    cycledetection(head);

}