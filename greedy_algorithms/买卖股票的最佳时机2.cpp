#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prices;
    int x;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> x;
        prices.push_back(x);
    }
    int sum = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int tmp = prices[i] - prices[i-1];
        if (tmp > 0)
        {
            /* code */
            sum += tmp;
        }
    }
    cout << sum << endl;
    return 0;
}
