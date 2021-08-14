#include<bits/stdc++.h>

using namespace std;


bool isPossible(int arr[], int n, int m, int min){
     
   int studentsRequied = 1, sum = 0;

   for(int i=0; i<n; i++){
     if(arr[i] > min){ 
        return false;
     }
     if(sum + arr[i] > min){
        studentsRequied++;
        sum = arr[i];

        if(studentsRequied > m){
            return false;
        }
     }
   
   else{
      sum += arr[i];
    }
  } 

  return true;
}

int allocateMin(int arr[], int n, int m){
    
    int sum = 0;

    if(n < m){
        return -1;
    }
 
   for(int i=0; i<n; i++){
        sum = sum + arr[i];
   } 

   int start=0, end = sum, ans = INT_MIN;

   while(start <= end){
       int mid = (start + end)/2;

       if(isPossible(arr, n, m, mid)){
         ans = min(ans, mid);
         end = mid - 1; 
       }
       else{
         start = mid + 1;  
       }
   }

   return ans;
}


int main(){
    
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;

    cout<<"The minimum no. of page are "<<allocateMin(arr, n, m);

  
	return 0;
}