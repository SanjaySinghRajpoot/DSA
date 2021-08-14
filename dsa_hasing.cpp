#include<bits/stdc++.h>

using namespace std;

// hashing is used to used the memory address of any data type 

int main(){

	int arr[] = {1,2,3,4,5,7,7,1,3,2,4};

	map<int,int> mp;
    
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
       mp[arr[i]]++;
    }

    for(auto i= mp.begin(); i !=mp.end(); i++){
         cout<< i->first <<" - "<<i->second<<endl;
    }
   
	return 0;
}