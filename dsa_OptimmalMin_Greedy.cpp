// #include<bits/stdc++.h>

// using namespace std;

// int main(){
  
//   int n; 
//   cin>>n;

//   int arr[n];

//   for(int i=0; i<n; i++){
//       cin>>arr[i];
//   }
 
//   sort(arr, arr+n);

//   int sum = 0;

//   for(int i=0; i<n-1; i++){
   
//      arr[i+1] = arr[i] + arr[ i+1];
     
//      sum = sum + arr[i+1];
  
//   }

//   cout<<sum<<endl; 
// }

#include<bits/stdc++.h>

using namespace std;

#define ll long long int;

signed main(){

	int n;
	cin>>n;

	vector<int> v(n);

	for(int i=0; i<n; i++){
       cin>>v[i];
	}

	priority_queue<int, vector<int>, greater<int>> minheap;

	for(int i=0; i<n; i++){
      minheap.push(v[i]);
	}

	int ans = 0;

	while(minheap.size() > 1){
         
         int e1 = minheap.top();
         minheap.pop();

         int e2 = minheap.top();
         minheap.pop();

         ans += e1 + e2;

         minheap.push(e1 + e2);
	}
    
    cout<<ans<<endl;

	return 0;
}