#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
bool hasCycle(ListNode *head)
{
    ListNode *q = head;
    int tag = 10000;
    while (q )
    {
        q = q->next;
        tag--;
    if(tag == 0)
    return true;
    }
    return false;
}
int main()
{

    return 0;
}