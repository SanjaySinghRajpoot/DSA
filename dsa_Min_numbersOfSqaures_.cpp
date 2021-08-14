#include<bits/stdc++.h>

using namespace std;


int main(){
   
   string s = "this is the way how you haveeeasd df   ";
    
   int k = 0,q = s.size()-1;
   
  if(s == ' '){
    return 0;
  }

  for(int i=s.size()-1; i>=0; i--){
       
       if(isspace(s[i])){
           k = 0;
       }else{
         
       }
  }

   cout<<k;
}
