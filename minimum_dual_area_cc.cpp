#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int t,n,m;
  scanf("%d", &t);
  cin>>t;

  while(t--){
  	cin>>n>>m;

    int arrN[n],arrM[m],cnt=0;

    int time[n] = {0};

    for(int i=0; i<n; i++)
        cin>>arrN[i];

    for(int i=0; i<m; i++)
        cin>>arrM[i];
     

   for(int i=0; i<n; i++){
        
        c++;
        if(arrN[i] == 1 ){
           arrN[i] = 0;
        }
        else{
           time[i] = c;
        }
    } 

    for(int i=0; i<m; i++){
        
    
      
       cout<<" "<<time[i];
    }
   


    cout<<endl;
  }


	return 0;
}