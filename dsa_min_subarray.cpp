#include<bits/stdc++.h>

using namespace std;

int subarray()

int main(){
   
   int t;
   cin>>t;

   int min = INT_MIN;

   while(t--){
      int n;
      cout<<"Enter the no. ";
      cin>>n;
      
      int arr[n];

      for(int i=0; i<n; i++)
      {
         cin>>arr[i];
      } 

      sort(arr,arr+n);
      int sum = 0;
       
      for(int i=0; i<n; i++)
      {  
        sum = sum + arr[i]; 

        for(int j=0; j<n; j++)
        {
        	if(i==j)
        	{

        	}
        	else
        	{
        		sum = sum + arr[j];

        		if(sum >= n){
                      
                      if(min < j){
                          min = j;
                      }
        		}
        	}
        }
        sum = 0;
      }

   }

}