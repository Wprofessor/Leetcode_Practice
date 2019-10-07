#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *detectCycle(ListNode *head)
{
    set<ListNode*> saveNode;
    ListNode *p = head;
    while (p)
    {
        if (saveNode.count(p) > 0)
            return p;
        saveNode.insert(p);
        p = p->next;
    }
    return NULL;
}
int main()
{

    return 0;
}