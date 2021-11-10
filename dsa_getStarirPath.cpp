#include<bits/stdc++.h>

using namespace std;


void getStairPath(int n, int k, string str)
{
    if(n < 0)
    {
      return; 
    }

    if(n == 0)
    {
        cout<<str<<endl;
       return;
    } 

    for(int i=1; i<=k; i++)
    {
        str = str + (char)(i);
        getStairPath(n - i, k, str);
    }
}

int main()
{ 
	int n = 5;
    int k = 3;
    string sq;

    getStairPath(n, k, sq);

}