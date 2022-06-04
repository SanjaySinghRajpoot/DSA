// // #include <bits/stdc++.h>
// // using namespace std;
 
// // int coinchange(vector<int>& a, int v, int n, vector<vector<int> >& dp)
// // {
// //     if (v == 0)
// //         return dp[n][v] = 1;
// //     if (n == 0)
// //         return 0;
// //     if (dp[n][v] != -1)
// //         return dp[n][v];
// //     if (a[n - 1] <= v) 
// //     {
// //         return dp[n][v] = coinchange(a, v - a[n - 1], n, dp) + coinchange(a, v, n - 1, dp);
// //     }
// //     else 
// //         return dp[n][v] = coinchange(a, v, n - 1, dp);
// // }

// // int main()
// // {
// //     int tc = 1;

// //     while (tc--) 
// //     {
// //         int n, v;
// //         n = 3, v = 4;
// //         vector<int> a = { 1, 2, 3 };
// //         vector<vector<int> > dp(n + 1, vector<int>(v + 1, -1));
// //         int res = coinchange(a, v, n, dp);
// //         cout << res << endl;
// //     }
// // }


// // #include<bits/stdc++.h>

// // using namespace std;


// // void binarySearch(int arr[], int min){
   
// //    int size = sizeof(arr) / sizeof(arr[0]);
   
// //    sort(arr, arr+size);

// //    int check = INT_MIN;
    
// //    for(int i=0; i<size-min; i++)
// //    {
// //       if(abs(arr[i] - arr[i + (min - 1)]) > check)
// //       {
// //             check = arr[i] - arr[min-1];
// //       }
// //    }

// //    cout<<check<<"this is the output"<<endl;

// // }

// // int main(){

// //     int arr[] = {7, 3, 2, 4, 9, 12, 56};
// //     int min = 3;
// //     binarySearch(arr, min);
// // }


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// #include <map>

// using namespace std;

// int main() {
//     int c =0;
    
//     map<string, int>m;
    
//     string s = "geeksforgeeks";
    
//     for(int i=0; i<s.size(); i++)
//     {
//         m[s[i]]++;
//     }
    
//     map<char, int>:: iterator itr;
    
//     for(itr = m.begin(); itr != m.end(); itr++)
//     {
//         cout<<itr->first<<"--"<<itr->second<<endl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

void reverse(string str){
    
    if(str.size() == 0)
      return;
      
      string ros = str.substr(1);
      reverse(str);
      cout<<ros<<endl;

}

int main() {
    // Write C++ code here
    string str="aaaaabbbbbbccccsss";
    
    reverse(str);

    return 0;
}