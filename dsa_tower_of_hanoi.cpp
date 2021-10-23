#include<bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, int t1, int t2, int t3)
{
    if(n==0)
      return;

    towerOfHanoi(n-1, t1, t3, t2);
    cout<<n<<" [ "<<t1<<" -> "<<t2<<endl;
    towerOfHanoi(n-1, t3, t2, t1);
}


int main()
{
   int n;
   cin>>n;
   
   int t1,t2,t3;

   cin>>t1>>t2>>t3;

   towerOfHanoi(n, t1, t2, t3);

	return 0; 
}