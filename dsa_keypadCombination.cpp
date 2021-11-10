#include<bits/stdc++.h>

using namespace std;

const vector<vector<string>> = {"", "", "abc", "def", "ghi", "jkl", "mno",
"pqrs", "tuv", "wxyz"};

void printKeyComb(string ques, string ans)
{
	if(ques.lengyth() == 0)
	{
		cout<<ans<<endl;
		return; 
	}
    
    char ch = ques[0];
    string sub_ans = ques.substr(1);

    int idx = ch - '0';

    for(int i= 0; i<keypad[idx].size(); i++)
    {
       printKeyComb(sub_ans, ans + keypad[idx][i]);
    }


}


int main()
{
  string ques = "678";
  string ans;
  printKeyComb(ques, ans);

}