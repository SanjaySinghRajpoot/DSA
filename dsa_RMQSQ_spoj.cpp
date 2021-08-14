#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e5+7;

int parent[100000];
int rank[100000];

void makeSet(){

    for(int i=1; i<=n; i++){
          // initializing value
          parent[i] = i;
          rank[i] = 0;
    }    
}

int findPar(int node){

    if(node == parent[node]){
        return node;
    }

    return parent[node] = findPar(parent[node]);
}

void union(int u, int v){
   
   u = findPar(u);
   v = findPar(v);

   if(rank[u] < rank[v]){
      parent[u] = v;
   }

   else if(rank[v] < rank[u]){
      parent[v] = u;
   }
   
   else{
     parent[v] = u;
     rank[u]++;
   }

}


int main(){
    makeSet();

    int m;
    cin>>m;

    while(m--){
        int u,v;
        cin>>u>>v;
        union(u,v;)
    }
   
   // check for 2 and 3 parent

    if(findPar(2) != findPar(3)){
        cout<<"they belong to different componenet" 
    }
}