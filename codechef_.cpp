

// // Q.2  ---------------------------------------

//  ListNode* addTwoNUmbers(ListNode* l1, ListNode* l2)

//  {
//     ListNode preHead(0), *p = &prehead;
//     int extra =0 ;

//     while(l1 || l2 || extra)
//     {
//         if(l1)
//         {
//             extra += l1->val;
//             l1 = l1->next;
//         }

//         if(l2)
//         {
//             extra += l2->val;
//             l2 = l2->next;
//         }

//         p->next = new ListNode(extra % 10);
//         extra = extra / 10;
//         p = p->next;
//     }

//     return preHead.next;
//  }


// //  Q.3 -------------------------------------------------

// #include<bits/stdc++.h>

//  using namespace std;


//  void show(char* res, int len)
//  {
//      for(int i=0; i<=len; i++)
//      {
//          cout<<res[i];
//      }

//      cout<<endl;
//  }

//  void showCobination(char result[], int cnt[], char str[], int level, int size, int length)
//  {
//     if(level == size)
//     {
//         return;
//     }

//     for(int i=0; i<length; i++)
//     {
//         if(cnt[i] == 0)
//             continue;

//         cnt[i]--;

//         result[level] = str[i];

//         show(result, level);

//         showCobination(result, cnt, str, level + 1, size, length);

//         cnt[i]++;
//     }
//  }


//  void combine(string str)
//  {
//      map<char, int> mp;

//      for(int i=0; i<str.size(); i++)
//      {
//           if(mp.find(str[i]) != mp.end())
//               mp[str[i]] = mp[str[i]] + 1;
//           else
//              mp[str[i]] = 1;
//      }

//      char* input = new char[mp.size()];
//      int* cnt = new int[mp.size()];
//      char* result = new char[str.size()];

//      int k=0;
     
//      for(auto i : mp)
//      {
//          input[k] = i.first;
//          cnt[k] = i.second;

//          k++;
//      }


//      int len = mp.size();
//      int size = str.size();

//      showCobination(result, cnt, input, 0, size, len);
//  }


// int main()
// {
//     string str = "ABC";
    
//     combine(str);
//     return 0;
// }


// ----------------------------------------------------------------------------------------------
#include<bits/stdc++.h>

using namespace std;

// print the couting from 1 to increasing order till n

int ptr(int x, int n)
{ 
    if(n == 0)
    {
      return 1;
    }

    int c  = ptr(x, n/2);
    int x1 = c * c;
    
    if(n % 2 == 1)
      x1 = x1 * x;

    return x1; 
}


int main()
{
    cout<<ptr(5, 3)<<endl;
}