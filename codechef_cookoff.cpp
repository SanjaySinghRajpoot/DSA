#include<bits/stdc++.h>

using namespace std;

const int size = 1e7+6;

bool vis[size];
vector<int> adj[size];


int main()
{
   int n,m;
   cin>>n>>m;

   for(int i=0; i<m; i++)
   {
      int u,v;

      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   queue<int> q;
   q.push(1);
   vis[1] = true;

   while(!q.empty())
   {
      int node = q.front();
      cout<<node<<" - ";
      q.pop();

      vector<int>:: iterator itr;
      
      for(itr = adj[node].begin(); itr != adj[node].end(); itr++)
      {
        if(!vis[*itr])
        {
          q.push(*itr);  // bfs algo 
          vis[*itr] = true;
        }
      }

   }



    return 0;
}