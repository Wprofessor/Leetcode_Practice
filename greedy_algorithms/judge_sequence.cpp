#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int cnt = 0;
    if (cnt == s.length())
                return true;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[cnt])
        {
            cnt++;
            if (cnt == s.length())
                return true;
        }
    }
    return false;
}
int main()
{
    string s = "abc";
    string t = "ahbg";
    cout << isSubsequence(s,t) << endl;
    return 0;
}