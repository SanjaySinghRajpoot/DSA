#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin>>t;
  
  int n,p,k;
  
  
  while(t--){
    vector<int> v;

    cin>>n>>p>>k;

    for(int i=0; i<n; i++){
        
        if(i == p){

        }else{
          v.push_back(i%k);
        }
    }

    sort(v.begin(), v.end());
    
    int c = p%k;

    for(int i=0; i<v.size(); i++){
          
          if(v[i] <= c && v[i+1] >= c){

               if(i%2 == 0){

                 cout<<i+2<<" -- "<<endl; 
                 break;
               }
               else{
                 cout<<i+3<<" -- "<<endl;
                 break; 
               }
          }
    }
  }
}