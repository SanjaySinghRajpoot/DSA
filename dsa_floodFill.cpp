#include<bits/stdc++.h>

using namespace std;


void floodfill(vector<vector<int>> arr, int row, int col, string psf)
{
    
    if(arr[0].size() >= col || arr.size() >= row || row < 0 || col < 0)
    {
        cout<<psf<<endl;
        return; 
    }

    vector<vector<bool>> check {false}; 
    
    if(!check [row][col])
    { 
       return; 
    }

    check[row][col] = true;
    
    floodfill(arr, row-1, col, psf + "t");
    floodfill(arr, row, col-1, psf + "l");
    floodfill(arr, row+1, col, psf + "b");
    floodfill(arr, row, col+1, psf + "r");

    check[row][col] = false; 

}


int main()
{
  
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr;
    bool check [n][m] = {false};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    floodfill(arr, 0,0,"");


    return 0;
}