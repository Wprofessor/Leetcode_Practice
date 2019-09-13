#include <bits/stdc++.h>
using namespace std;
// substr（ｘ，ｙ）用法：截取ｘ后面的ｙ个字符
string toGoatLatain(string S)
{
    S += " ";
    vector<string> words;
    int start = 0, end = -1;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == ' ')
        {
            start = end+1;
            end = i;
            string word = S.substr(start,end-start);
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' ||
                word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
            {
                word += "ma";
            }
            else
            {
                word = word.substr(1) + word.substr(0,1) + "ma";
            }
            words.push_back(word);
        }
    }
    string result = "";
    for (int i = 0; i < words.size(); i++)
    {
        string val(i+1,'a');
        result += words[i] + val ;
        if(i < words.size() - 1)
        result += " ";
    }
    return result;
}
int main()
{
    cout << toGoatLatain("I speak Goat Latin") << endl;
    return 0;
}