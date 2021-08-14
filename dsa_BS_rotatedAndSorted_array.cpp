#include<bits/stdc++.h>

using namespace std;


int searchInRotatedArary(int arr[], int key, int left, int right){
      
    if(left > right){
       return -1;
    } 

    int mid = (left+right)/2;

    if(arr[mid] == key){
    	return mid;
    }

    
}

int main(){
	int arr[] = {5,6,7,10,2,4}
	

	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        
	}
}