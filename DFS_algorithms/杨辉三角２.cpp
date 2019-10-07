#include <bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex)
{  
    vector<int> firstList;
    firstList.push_back(1);
     if (rowIndex == 0)
        return firstList;
    for (int i = 1; i <= rowIndex; i++)
    {
        vector<int> list;
        list.push_back(1);
        for (int j = 1; j < firstList.size(); j++)
        {
            list.push_back(firstList[j - 1] + firstList[j]);
        }
        list.push_back(1);
        if (i == rowIndex)
            return list;
        firstList.clear();
        firstList.swap(list);
        list.clear();
    }
    return firstList;
}
int main()
{

    return 0;
}