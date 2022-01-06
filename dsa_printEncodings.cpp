#include <bits/stdc++.h>

using namespace std;

vector<string> v = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

string cpy;

void printEnc(string str, string ans);
{
  if (str.size() == 0)
  {
    cout << str[0] << endl;
    return;
  }
  else if (str.size() == 1)
  {
    char ch = str[0];

    if (ch == '0')
    {
      return;
    }
    else
    {
      int num = ch - '0';
      char ch1 = (char)('a' + num - 1);
      ans = ans + ch1;

      cout << ans << endl;
    }
  }
  else
  {
    char ch = str[0];
    String roq = ques.substring(1);

    if (ch == '0')
    {
      return;
    }
    else
    {
      int chv = ch - '0';
      char code = (char)('a' + chv - 1);
      printEnc(roq, ans + code);
    }

    string ch12 = str.substr(0, 2);
    string ans = str.substr(2);

    int ch12v =

        if (ch12v <= 26)
    {
      char code
    }
  }
}

int main()
{
  string str = "12103";

  printEnc(str, "");
}