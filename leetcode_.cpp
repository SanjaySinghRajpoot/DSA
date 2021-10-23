#include<bits/stdc++.h>

using namespace std;


vector<int> k;

void maxProfit(vector<int>& v, int idx, int target) 
{
   
   if(idx == v.size())
      return;
   
   if(v[idx] == target)
   {
      k.push_back(idx+1);
   }

   maxProfit(v, idx+1, target);

   
   
}


int main(){
  
  vector<int> v = {4,8,2,3,4,5,1,4};

  maxProfit(v, 0, 4);

  for(int i=0; i<k.size(); i++)
  {
     cout<<k[i]<<endl;
  }

}


