#include<bits/stdc++.h>

using namespace std;


void arrayPrint(int arr1[], int size, int idx)
{
    
    
    if(size == idx)
    	return;

    arrayPrint(arr1, size, idx + 1);

    cout<<arr1[idx]<<endl;
        
}

int main()
{
  int arr[] = {1,4,5,6,7,8};

  int size = sizeof(arr)/sizeof(arr[0]);

   arrayPrint(arr, size, 0);

   return 0;
}