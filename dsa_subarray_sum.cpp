// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//    int arr[] = {1, 4, 20, 3, 10, 5};
//    int tgt = 33;

//    int size = sizeof(arr)/sizeof(arr[0]);

//    int sum = 0;
   
//    for(int i=0; i<size-1; i++)
//    {
//        sum = sum + arr[i];
//        for(int j=i+1; j<size; j++)
//        {
//            sum = sum + arr[j];

//            if(sum == tgt){
//                cout<<i<<"---"<<j<<endl;
//            }
//        }

//        sum =0;
//    }

//    cout<<"done "<<endl;

// }

#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int arr[] = {1,4,20,3,5,10,1};
    int sum = 28;
    
    int size = sizeof(arr)/sizeof(arr[0]);
     
    int find_sum = arr[0], start=0;

    for(int i=0; i<size; i++)
    {
      while(find_sum > sum && start < i-1)
      {
         find_sum = find_sum - arr[start];
         start++;
      }

      if(find_sum == sum)
        cout<<i<<"start - end "<<start<<endl;

      if(i < size)
        find_sum = find_sum + arr[i];
    }

  
}
