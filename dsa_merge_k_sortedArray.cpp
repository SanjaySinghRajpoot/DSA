#include<bits/stdc++.h>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second 

using namespace std;

int main(){

	int k;
	cin>>k;

	vector<vector<int>> a(k);

	rep(i, 0, k){

		int size;
		cin>>size;

		a[i] = vector<int>(size);

		rep(j, 0, size){
           
           cin>>a[i][j];

		}
	}

	vector<int> idx(k,0);

	priority_queue<pii, vector<pii>, greater<pii>> pq;

	rep(i, 0, k){
       pq.push({a[i][0], i});
	}

	vi ans;

	while(!pq.empty ()){

	}


}