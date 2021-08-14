#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
       cin>>a[i];
    }

    map<int, int> cnt;

    int prefSum = 0;


    for(int i=0; i<n; i++){
        
        prefSum += a[i];
        cnt[prefSum]++;

    }  

    // Ex -> -1 1 -1 1 has 4 sets of 0 subarray

    int ans = 0;

    map<int, int> :: iterator itr;

    for(itr = cnt.begin(); itr != cnt.end(); itr++)
    {
       int c = itr->second;   

       ans += (c*(c-1))/2;

       if(itr->first){
         // access the second element and check
       	  ans += itr->second;
       }

    }

    cout<<ans<<endl;

	return 0;
}