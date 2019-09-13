#include <bits/stdc++.h>
using namespace std;
string removeKdigits(string num, int k)
{
    stack<char> word;
    word.push(num[0]);
    for (int i = 1; i < num.size(); i++)
    {
        while (!word.empty() && word.top() > num[i] && k > 0)
        {

            word.pop();
            k--;
        }
        word.push(num[i]);
    }
    for (int i = k; i > 0; i--)
    {
        word.pop();
    }
    string new_word = "";
    while (!word.empty())
    {
        new_word += word.top();
        word.pop();
    }
    for (int i = 0, j = new_word.size() - 1; i < j; i++, j--)
    {
        char temp = new_word[i];
        new_word[i] = new_word[j];
        new_word[j] = temp;
    }
    //去掉首位的０
    int index = 0;
    while (new_word[index] == '0')
    {
        index++;
    }
    if (index == new_word.size())
        return "0";
    return new_word.substr(index);
}
int main()
{
    cout << removeKdigits("10", 1) << endl;
    return 0;
}