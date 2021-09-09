#include <bits/stdc++.h>

using namespace std;

bool ispowerof2(int n)
{ 
	return (n && !(n & n-1));
}

int numbersOfOnes(int n)
{
	int count=0;

	while(n)
	{
		n = n & (n-1);
		count++;
	}

	return count;
}

void subsets(int arr[], int n)
{
	for(int i=0; i<(1<<n); i++)
	{
		for(int j=0; j<n; j++)
		{
          if(i & (1<<j))
          {
          	cout<<arr[j]<<" ";
          }
		}

		cout<<endl;
	}
}

int main()
{
    cout<<ispowerof2(14)<<endl;
	return 0;
}