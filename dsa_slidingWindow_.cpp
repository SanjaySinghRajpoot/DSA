#include<bits/stdc++.h>

using namespace std;

int main(){
   
    int n,k, min = INT_MAX;

    cin>>n>>k;

    vector<int> v(n);

    for(int i=0; i<n; i++){
           cin>>v[i];
    } 

    int sum=0;

    for(int i=0; i<k; i++){
        sum = sum + v[i];
    }

    cout<<sum<<endl;

    for(int i=1; i<=(n-k); i++){
        sum = sum - v[i-1] + v[i+k-1];  

       cout<<sum<<endl;               
    }


	return 0;
}