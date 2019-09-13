#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int count = gas.size();
    gas.insert(gas.end(), gas.begin(), gas.end());
    cost.insert(cost.end(), cost.begin(), cost.end());
    for (int i = 0; i < count; i++)
    {
        int k = i;
        int cnt = 0;
        int sum = gas[i];
        int tag = i % count;
        for (int j = i + 1; j < gas.size(); j++)
        {
            sum -= cost[k++];
            // cout << "-->" << sum << endl;
            if (sum < 0)
                break;
            sum += gas[j];
            cnt++;
            if (cnt == count)
            {
                return tag;
            }
        }
    }
    return -1;
}
// 如果第ｉ个点没法到达，则开始的点到这个点之间的所有的点都不是初始点
int canCompleteCircuit_change(vector<int> &gas, vector<int> &cost)
{
    int sum = 0;
    int start = 0;
    int total = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        total += gas[i] - cost[i];
        sum += gas[i] - cost[i];
        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }
    }
    return total >= 0 ? start : -1;
}
int main()
{
    vector<int> gas{5, 1, 2, 3, 4};
    vector<int> cost{4, 4, 1, 5, 1};
    cout << canCompleteCircuit(gas, cost) << endl;
    cout << canCompleteCircuit_change(gas, cost) << endl;
    // cout << "fsd" << endl;
    return 0;
}