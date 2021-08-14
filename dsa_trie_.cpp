#include<bits/stdc++.h>

using namespace std;

struct trie{
  struct trie *child[26];
  bool isend; 
  
  trie()
  {
     memset(child, 0, sizeof(child));
     isend = false;  
  }

};

struct trie* root;

bool search(string str)
{
  struct trie *cur = root;

  for(char ch: str){
     int idx = ch - 'a';   //  to get the integer between 1-26

     if(cur->child[idx] == NULL)
        return false;
     cur = cur -> child[idx];
  }
 
  return cur->isend;
}

void insert(string str)
{
   struct trie* cur = root;

   for(char ch: str)
   {
     int idx = ch - 'a';

     if(cur->child[idx] == NULL)
     { 
        cur->child[idx] = new trie;
     }  
     
     cur = cur->child[idx];
   }

   cur->isend = true;
}

int main(){
    
    root= new trie;
    int n;
    cin>>n;

    while(n--){
      string str;
      cin>>str;
      insert(str);
    }

    cin>>n;

    while(n--)
    {
      string str;
      cin>>str;

      if(search(str))
      {
        cout<<str<<" is present \n";
      }
      else
      {
        cout<<str<<" is not present \n";
      }
    }

}