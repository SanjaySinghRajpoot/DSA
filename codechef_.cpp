#include<bits/stdc++.h>

using namespace std;


void s(){

 int t,n,d,h, c=0,count=0;
  
     cin>>n>>d>>h;
     
     int arr[n];

     for(int i=0; i<n; i++)
     {
        cin>>arr[i];
      }

     for(int i=0; i<n; i++)
     {
        if(arr[i] > 0)
          count = count + arr[i];
        else if(arr[i] == 0){
          
          if(count < d)
             count = 0;
          else 
             count = count - d;
        }
        
        if(count > h)
          c++;
     }

       if(c > 0)
          cout<<"Yes"<<endl;
        else
          cout<<"No"<<endl;
     
}


int main()
{
   int t;
   cin>>t;

   for(int i=0; i<t; i++)
       s();
   
   return 0;

}