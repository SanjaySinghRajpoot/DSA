// #include<bits/stdc++.h>

// using namespace std;

// Approach: Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking. So the basic idea is to start from the root or any arbitrary node and mark the node and move to the adjacent unmarked node and continue this loop until there is no unmarked adjacent node. Then backtrack and check for other unmarked nodes and traverse them. Finally, print the nodes in the path.


// const int N = 1e5 + 2;
// bool vis[N];
// vector<int> adj[N];

// int main(){
	
// 	for(int i=0; i<N; i++){
//          vis[i] = 0;
// 	}

// 	int x,y;
// 	cin >> x >> y;

// 	for(int i=0; i<y; i++){
       
//         cin >> x >> y;

//         adj[x].push_back(y);
//         adj[y].push_back(x);

// 	}

// 	 queue<int> q;

// 	 q.push(1);
// 	 vis[1] = true;

// 	 while(!q.empty())
// 	 {
//         int node = q.front();

//         q.pop();

//         cout<< node <<endl;

//         vector<int> :: iterator it;

//         for(it = adj[node].begin(); it != adj[node].end(); it++){
           
//            if(!vis[*it]){
               
//                vis[*it] = 1;
//                q.push(*it);

//            }
//         }
// 	 }

// }

#include<bits/stdc++.h>

using namespace std;

const int N = 1e7+2;
bool vis[N]; 
vector<int> adj[N];

int main(){
    
    int n,m;
    
    cin>>n>>m;

    for(int i=0; i<m; i++){
       
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    queue<int> q;
    q.push(1);
    vis[1] = true;

    while(!q.empty()){
        int node = q.front();

        cout<<node<<" - ";
        q.pop();
        
        vector<int> :: iterator itr;

        for(itr = adj[node].begin(); itr != adj[node].end(); itr++)
        {   
           if(!vis[*itr])
           {
                vis[*itr] = 1;
                q.push(*itr);
           }
        }
    }
     
     cout<<endl;

	return 0;
}

