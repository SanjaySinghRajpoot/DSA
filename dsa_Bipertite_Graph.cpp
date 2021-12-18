#include<bits/stdc++.h>

using namespace std;

// Properties of a Bipertite Graph
// -> the graph is 2 colorable
// -> does not contain any odd length cycle
// -> vertices can be divided into 2 disjoint sets 

vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;

void color(int u, int curr){
   
   if(col[u] != -1 and col[u] != curr){
       bipart =  false;
       return;
   }

   col[u] = curr;

   if(vis[u])
      return;

   vis[u] = true;

   for(auto i : adj[u]){
      color(i, curr xor 1);
   }
}

int main(){
    int n,m;
    cin>>n>>m;


    for(int i=0; i<m; i++){
         
        int u,v;

        adj[u].push_back(v);   
        adj[v].push_back(u);  
    }

    for(int i=0; i<m; i++){

        if(!vis[i]){
           color(i,0);
        }   
    }

    if(bipart){
    	cout<<"Grpsh is bipart";
    }
    else 
    	cout<<"Grpsh is not a bipart";

	return 0;
}