#include<bits/stdc++.h>

using namespace std;


void printMaze(int s1, int s2, int e1, int e2, string s)
{
	if(s1 > e1 || s2 > e2)
	{
		cout<<s<<endl;
		return;
	}
   
	if(s1 == e1 && s2 == e2)
	{
		cout<<s<<endl;
		return;
	}
   
   printMaze(s1, s2+1, e1, e2, s + 'v');
   printMaze(s1+1, s2, e1, e2, s + 'h');

}


int main()
{
	string s = "";
   printMaze(1, 1, 3, 3, s);
}