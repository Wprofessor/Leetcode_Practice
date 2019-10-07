#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{

    vector<vector<int>> ans;
    if (numRows == 0)
        return ans;
    vector<int> firstList;
    firstList.push_back(1);
    ans.push_back(firstList);

    for (int i = 1; i < numRows; i++)
    {
        vector<int> list;
        list.push_back(1);
        for (int j = 1; j < firstList.size(); j++)
        {
            list.push_back(firstList[j - 1] + firstList[j]);
        }
        list.push_back(1);
        ans.push_back(list);
        firstList.clear();
        firstList.swap(list);
        list.clear();
    }
    return ans;
}
int main()
{

    return 0;
}