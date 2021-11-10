#include<bits/stdc++.h>

using namespace std;

int c=0;
string str;
string str1;

map<int, bool> mp;

void findAnagrams(string k, int size) 
{
   if(c >= size)
      return;
   
   int ch = k[c] - 'a';  // will give me an integer 

   if(mp[ch])
   {

   }
   else{
      mp[ch] = true; 

       str = str + k[c];
   }

   c++;

   findAnagrams(k, size);
}

int main()
{
   string k = "sfsdfaererersssssdfsdfsssfs";
   
   int size = k.size();

   findAnagrams(k, size);

   cout<<str<<endl;
}