#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t=53;

    // t = 351
	// 1, 2, 5, 10, 20, 50, 100, 200, 1000, 2000
     
    int arr[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

   int c=0;

   while(t>=1){
      
      
      for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
           
          if(t >= arr[i]){
          	 
          	 t = t - arr[i];

             cout<<arr[i]<<endl;
             
          	 c++;
          }

      }    
 
   }
	
	cout<<"no of notes - "<<c<<endl;

}