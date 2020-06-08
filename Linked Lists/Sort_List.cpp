/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A)
{
    priority_queue<int,vector<int>, greater<int> > q;

    ListNode *curr=A;

    while(curr)
    {
        q.push(curr->val);
        curr=curr->next;
    }

    curr=A;
    while(curr)
    {
        curr->val=q.top();
        q.pop();
        curr=curr->next;
    }

    return A;
}
