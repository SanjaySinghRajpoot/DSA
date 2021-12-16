#include<bits/stdc++.h>

using namespace std;

void subsetSum(string arr, int idx, string set, int sos, int target)
{
    if(idx == arr.size())
    {
        if(sos == target)
        {
            cout<<"output is this set "<<set<<endl;
        }
        return;
    }

    subsetSum(arr, idx + 1, set + char(arr[idx]), sos + arr[idx], target);

    subsetSum(arr, idx + 1, set, sos, target);
   
}

int main()
{
    string arr = {20, 10, 43, 67, 78};
   
    int target = 30;
    string str="";

    subsetSum(arr, 0, str, 0, target);

    cout<<str<<endl;

    return 0;
}