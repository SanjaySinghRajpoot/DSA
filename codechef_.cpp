// #include<bits/stdc++.h>

// using namespace std;


// int main()
// {
//   int t;
//   cin>>t;
 
//   int a,b,c,d,e;

//   int v[3];

//   while(t--)
//   {
//     cin>>a>>b>>c>>d>>e;

//     if((a + b) <= d && c <= e && a+b >= c)
//         cout<<"YES"<<endl;
//     else if(a + c <= d && b <= e && a+c >= b)
//         cout<<"YES"<<endl;
//     else if(b + c <= d && a <= e && b+c >= a)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
//   }


  
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//   int t;
//   cin>>t;
  
//   int n,a,b;
  
//   string str;

//   while(t--)
//   {
//     cin>>n>>a>>b;
    
//     int z=0,o=0,time;


//     cin>>str;

//     for(int i=0; i<n; i++)
//     { 
//        if(str[i] == '0')
//           z++;
//        else
//          o++;
//     }

//     time = (z*a + o*b);

//     cout<<time<<endl;
//   }
// }