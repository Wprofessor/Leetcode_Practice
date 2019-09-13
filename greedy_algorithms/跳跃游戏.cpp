#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    int x;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> x;
        nums.push_back(x);
    }
    int summax = 0,tag = 0;
    for (int i = 0; i < nums.size()-1; i++)
    {
        summax = summax > (nums[i]+i) ? summax : (nums[i] + i);
        if(tag + nums[i] == i)
        cout << "false" << endl;
    }
    cout << summax << endl;
    return 0;
}
