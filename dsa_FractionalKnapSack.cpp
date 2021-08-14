#include<bits/stdc++.h>

using namespace std;

int main(){
   
   int bag;
   cin>>bag;

   int n;
   cin>>n;

   vector<vector<int>> v;

   int value[n], weight[n], net[n];

   for(int i=0; i<n; i++){
      cin>>value[i]>>weight[i];
      
      net[i] = weight[i]/value[i];
   }

   
   sort(net, net+n, greater<>());


   while(sum <= bag){
   	 sum = sum + 
   }





   return 0;
}