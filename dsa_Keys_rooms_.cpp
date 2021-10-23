#include<bits/stdc++.h>

using namespace std;


int recur(int arr[], int start, int num)
{
	int size = sizeof(arr)/sizeof(arr[0]);

	if(start == size)
	{
       return -1; 
	}

	int l_ind = recur(arr, start + 1, num); 

	if(l_ind == -1)
	{
        if(arr[start] == num)
        {
        	return start;
        }
        else{
        	return -1;
        }
	}
	else{
		return l_ind;
	}
}


int main()
{
	int arr[] = {4,5,23,2,3,4,1,12,13,3,7};

	int size = sizeof(arr)/sizeof(arr[0]);


	cout<<recur(arr, 0, 3);


	return 0;
}