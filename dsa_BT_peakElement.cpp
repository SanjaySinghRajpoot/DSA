#include<bits/stdc++.h>

using namespace std;

//a peak will be greater then left and right elements 

int findPeakEle(int arr[], int low, int high, int n){
   
   int mid = low + (high - low)/2;

   if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])){
   	    return mid;
   }

   else if(mid > 0 && arr[mid-1] > arr[mid]){
     return findPeakEle(arr, low, mid-1, n);
   }

   else{
   	 return findPeakEle(arr, mid+1, high, n); 
   }
}


int main(){
	
	int arr[] = {-1,7,5,6,5,10,8};
	int n=6;

    cout<< "peak element: "<<findPeakEle(arr, 0, n-1, n)<<endl;

    return 0;
}