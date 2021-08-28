#include<bits/stdc++.h>

using namespace std;

int priority_queue(int arr[], int n, int k){
     
     priority_queue<int, vector<int>, greater<int>> pq;

     for(int i=0; i<n; i++)
     {
       pq.push(arr[i]);
     }

     int count = 0;

     while(pq.top() <= k){
     	count++;
     	k = k - pq.top();
     	pq.pop();
     }

     return count;
}

int main(){

    int arr[] = {3,7,2,3,8,9,5,6,4};

    int size = sizeof(arr)/sizeof(arr[0]);
   
    int k = 25;
    
    cout<<priority_queue(arr, size, k);

	return 0;
}