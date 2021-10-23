#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    
    vis[node] = 1;   
    cout<<node<<" ";

   vector<int> :: iterator itr;

    for(itr = adj[node].begin(); itr != adj[node].end(); itr++){
         
         if(vis[*itr]);
         else{
            dfs(*itr);
         }
    }

}


// void dfs(int node)
// {
//     vis[node] = true;

//     vector<int> :: iterator itr;
    
//     for(itr = adj[node].begin(); itr != adj[node].end(); itr++)
//     {
//         if(vis[*itr]);
//         else
//             dfs(*itr);
//     }
// }


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

// #include<bits/stdc++.h>

// using namespace std;


// const int size = 1e6+7;
// bool vis[size];
// vector<int> adj[size];


// void dfs(int vertex)
// {

//     cout<<vertex<<endl;

//     vis[vertex] = true;
    
//     for(auto i : adj[vertex])
//     {
//         if(vis[i]) continue;
        
//             dfs(i);
//     }
// }


// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     for(int i=0; i<n; i++)
//     {
//        vis[i] = false;
//     }

//     int v,u;

//     for(int i=0; i<m; i++)
//     {
//       adj[v].push_back(u);
//       adj[u].push_back(v);
//     }

//     dfs(1);
// }