#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long int n, mid,suml=0, sumR=0;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    if(n%2 == 0){
    	mid = n/2;
    }
    else{
    	mid = n/2 + 1;
    } 

    // max diff
    for(int i=0; i<n/2; i++){
        
      suml = suml + abs(arr[i+n/2] - arr[i]); 
    }

    cout<<"maximum differece is -> "<<suml<<endl;

    suml=0,sumR=0;

    for(int i=0; i< n; i++){
       
       if(i%2 == 0){
          suml = suml + arr[i];
       }else{
          sumR = sumR + arr[i];
       }
    }

    cout<<"minimum differece is -> "<<abs(sumR-suml)<<endl;


	return 0;
}