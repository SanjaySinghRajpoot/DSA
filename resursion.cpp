#include<bits/stdc++.h>

using namespace std;

int c=0;


void findAnagrams(string k, int size, string str) 
{
    if(size == k.size())
    {
       cout<<str<<endl;
       return;
    }


    char ch = k[size];

    findAnagrams(k, size+1, str + ch);

    findAnagrams(k, size+1, str);
}

int main()
{
   string k = "abc";
   
   int size = k.size();

   findAnagrams(k, 0, "");

}