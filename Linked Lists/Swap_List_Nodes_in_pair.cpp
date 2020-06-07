/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* a)
{
    ListNode *head=a;

    if(a==NULL || a->next==NULL)return a;

    while(a && a->next)
    {
        swap(a->val,a->next->val);
        a=a->next->next;
    }

    return head;
}
