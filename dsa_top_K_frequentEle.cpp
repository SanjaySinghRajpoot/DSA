#include<bits/stdc++.h>

using namespace std;

int main(){

 	int arr[] = {2,3,3,1,9,3,3,3,4};

 	int k = 4;

 	int c=k;

    map<int,int> mp;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
         
         if(mp.size()+1 <= k){
	         mp[arr[i]]++;

         }
    } 	 

    map<int,int>:: iterator itr;

     
    for(itr = mp.begin(); itr!= mp.end(); itr++){
       cout<<itr->first<<" -> "<<itr->second<<endl;       
    }


    mp.clear();

}