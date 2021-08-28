#include<bits/stdc++.h>

using namespace std;

int main(){

   int t,n;
   cin>>t;

   map<int,int>m;

   while(t--){
      cin>>n;

      int arr[n];

      for(int i=0; i<n; i++){
         cin>>arr[i];
         m[arr[i]]++;
      }
     
     
     int maxe = INT_MIN;

     for(auto it: m)
     {
       maxe = max(maxe,it.second);
     }

     if(n<=2)
      cout<<0<<endl;
     else if(maxe == 1)
      cout<<n-1<<endl;
     else
      cout<<n-maxe<<endl;

   }
}