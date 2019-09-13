#include <bits/stdc++.h>
using namespace std;
vector<string> findOcurrences(string text, string first, string second)
{
    vector<string> words;
    int start = 0,end = -1;
    text += " ";
    for (int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' '){
            start = end+1;
            end = i;
            string word = text.substr(start,end - start);
            words.push_back(word);
        }
    }
    vector<string> results;
    for (int i = 0; i < words.size()-2; i++)
    {
        if (words[i] == first && words[i+1] == second)
        {
            results.push_back(words[i+2]);
            cout << words[i+2] << endl;
        }
    }
    return results;
}
int main()
{
    cout << findOcurrences( "alice is a good girl she is a good student","a","good") << endl;
    return 0;
}