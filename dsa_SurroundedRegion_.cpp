#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>> A(n,vector<char>(m));

    for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           cin>>A[i][j];
       }
    }

    for(int i=0; i<n; i++){
       
       if(A[i][0] == 'O'){
           A[i][0] = '*';
       }


       if(A[i][m-1] == 'O'){
           A[i][m-1] = '*';
       }
    }

    for(int j=0; j<m; j++){
       
       if(A[n-1][j] == 'O'){
           A[n-1][j] = '*';
       }

       if(A[0][j] == 'O'){
           A[0][j] = '*';
       }
    }


    for(int i=0; i<n; i++){ 
       for(int j=0; j<m; j++){
           
           if(A[i][j] == 'O'){
              A[i][j] = 'X';
           }
       }
    }

    

    for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
    }


	return 0;
}