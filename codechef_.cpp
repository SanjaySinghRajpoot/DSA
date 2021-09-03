#include<bits/stdc++.h>

using namespace std;


int main()
{
  int n;
  cin>>n;

  vector<int> masks(n,0);

  for(int i=0; i<n; i++)
  {
     int num_worker;
     cin>>num_worker;

     int mask=0;

     for(int j=0; i < num_worker; ++j)
     {
        int day;
        cin>>day;
        mask = (mask | (1<<day));
     }   
     masks[i] = mask;
  }

  for(int i=0; i<n; i++)
  {
    for(int j = i+1; j<n; ++j)
    {
      int intersesction = (masks[i] & masks[j]);
      int common_days = __buildin_popcount(intersesction);

      cout<<i<<" "<<j<<" "<<intersesction<<endl;
    }
  }
    
  
}