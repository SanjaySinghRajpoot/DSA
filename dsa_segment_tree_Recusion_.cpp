#include<bits/stdc++.h>

using namespace std;

int constuctST(int ss, int se, int si){

	if(ss == se)
	{
		tree[si] = arr[ss];
		return arr[ss];
	}

	int mid = (ss+se)/2;

	tree[si] = constuctST(ss, mid, 2*si+1) + constuctST(mid+1, se, 2*si+1);
    
    return tree[si];
}


int main(){

   

	return 0;
}