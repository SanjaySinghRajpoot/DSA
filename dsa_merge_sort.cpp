// #include<bits/stdc++.h>

// using namespace std;

// void merge(int arr[], int l, int r, int mid)
// {
//     int i = l;
//     int j = mid+1;
//     int temp = l;

//     int cpy[(r-l)+1];

//     while(i<= mid && j<=r)
//     {
//         if(arr[i] <= arr[j])
//         {
//             cpy[temp] = arr[i];
//             i++;
//             temp++;
//         }else{
//             cpy[temp] = arr[j];
//             j++;
//             temp++;
//         } 
//     }

//     while (i <= mid)
//     {
//         cpy[temp] = arr[i];
//         temp++;
//         i++;
//     }

//     while(j <= r)
//     {
//         cpy[temp] = arr[j];
//         j++;
//         temp++;
//     }
    

//     cout<<endl;
//     for(int k=l; k<=r; k++)
//     {
//         cout<<cpy[k]<<" ";
//     }

    
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if(l<r)
//     {
//         int mid = (l+r)/2;
//         mergeSort(arr,l, mid);
//         mergeSort(arr, mid+1, r);
//         merge(arr, l, r, mid);
//     }
// }

// int main()
// {
//     int arr[] = {3,2,1};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int l = 0;
//     int r = size - 1;

//     mergeSort(arr, l, r);
// }

#include <iostream>
 
using namespace std;
 
// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}
 
int main()
{
	int i;
	cout<<"\nEnter the number of data element to be sorted: ";
 
	int arr[] = {4,7,8,3,2,57,2};
    int n = 7;
  
	MergeSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}