#include<bits/stdc++.h>

using namespace std;

     
priority_queue<int, vector<int>, greater<int>> pqmin;
priority_queue<int, vector<int>> pqmax;


 void insertQ(int x){

 if(pqmin.size() == pqmax.size()){
    
    if(pqmax.size() == 0){
       pqmax.push(x);
       return;
    }

    if(x < pqmax.top()){
    	pqmax.push(x);
    }
    
    else{
    	pqmin.push(x);
    }

 }

 else{

 	if(pqmin.size() < pqmax.size()){
       if(x >= pqmax.top()){
           pqmin.push(x);
           return;
       }
       else{
       	 int temp = pqmax.top();  //to balance the size of the array
       	 pqmax.pop();
       	 pqmin.push(temp);
       	 pqmax.push(x);
       }
 	}
 	else{
 		if(x <= pqmin.top()){
           pqmax.push(x);
 		}

 		else{
 			int temp = pqmin.top();
 			pqmin.pop();
 			pqmax.push(temp);
 			pqmin.push(x);
 		}
 	}
  }     
}

  double findMedian(){
  	 if(pqmin.size() == pqmax.size()){
        return (pqmin.top() + pqmax.top())/2.0;
  	 }
  	 else if(pqmax.size() > pqmin.size())
  	 	return pqmax.top();
  	 else
  	 	return pqmin.top();

  	 return 0;
  }


int main(){
  
  // priority_queue<int, vector<int>> pq;

  // pq.push(1);
  // pq.push(4);
  // pq.push(6);
  // pq.push(7);

  // cout<<pq.top()<<endl;
  // pq.pop();
  // cout<<pq.top()<<endl;

  // priority_queue<int, vector<int>, greater<int>> pqm;

  // cout<<"\n";

  // pqm.push(4);
  // pqm.push(6);
  // pqm.push(7);
  // pqm.push(0);

  // cout<<pqm.top()<<endl; 
  // pqm.pop();
  // cout<<pqm.top()<<endl;
  

 insertQ(10);
 insertQ(4);
 insertQ(6);
 insertQ(11);

 cout<<findMedian()<<endl;

}