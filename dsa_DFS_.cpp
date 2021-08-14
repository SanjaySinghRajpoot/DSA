//  #include<bits/stdc++.h>

// using namespace std;

// const int N = 1e5 + 2;
// bool vis[N];
// vector<int> adj[N];


// void dfs(int node)
// {
//    // preorder
//    vis[node] = 1;
//    cout<< node << " ";
   
//    vector<int> :: iterator it;
 
//    for(it = adj[node].begin(); it != adj[node].end(); it++)
//    {
//       if(vis[*it]);

//       else{   
//          dfs(*it);
//       }    

//    }

// }


// int main(){
    
//     int n,m;
//     cin>> n >> m;

//     for(int i=0; i<=n; i++){
//        vis[i] = false;
//     }

//     int x,y;

//     for(int i=0; i<m; i++)
//     {
//        cin>> x >> y;  

//        adj[x].push_back(y);
//        adj[y].push_back(x); 

//     }

//     dfs(1);

// 	return 0;
// }

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    
    vis[node] = 1;    // marking true
    cout<<node<<" ";

   vector<int> :: iterator itr;

    for(itr = adj[node].begin(); itr != adj[node].end(); itr++){
         
         if(vis[*itr]);
         else{
            dfs(*itr);
         }
    }

}


int main(){
   int n,m;

   cin>>n>>m;

   for(int i=0; i<n; i++){
        vis[i] = false;
   }
   
   int v,u;

   for(int i=0; i<m; i++){
      
      cin>>v>>u;

     adj[v].push_back(u);
     adj[u].push_back(v);

   }

     dfs(1);

}