#include<bits/stdc++.h>

using namespace std;


void bubbbleSort(vector<int> v){
       
       for(int i=0; i<v.size(); i++){
            
            for(int j=0; j<; j++){
               
               if(arr[i+1] < arr[i])
               {
               	 temp = arr[i];
               	 arr[i] = arr[i+1];
               	 arr[i+1] = temp;
               }

            }
            
       }
}


int main(){
  
  vector<int> v;

  int t,n;

  while(t--){
  	cin>>n;

  	v.push_back(n);
  }

  bubbbleSort(v);

 return 0;
}