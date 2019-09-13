#include <bits/stdc++.h>
using namespace std;
int wigghleMaxLength(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return 1;
    }
    if (nums.size() == 0)
    {
        return 0;
    }
    int difference = nums[0]- nums[1];
    int count = difference==0?1:2;
    for (int i = 1; i < nums.size()-1; i++)
    {
        int d = nums[i] - nums[i+1];
        if(difference <= 0 && d >0 || difference>=0 && d<0){
            count++;
            difference = d;
        }
    }
    return count;
    
}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << wigghleMaxLength(nums) << endl;
    //cout << "ref" << endl;
    return 0;
}