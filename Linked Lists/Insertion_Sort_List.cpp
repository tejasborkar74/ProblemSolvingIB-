/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head)
{
    ListNode *curr=head,*pre=head;

    while(curr)
    {
        pre=head;

        while(pre!=curr)
        {
            if(pre->val>curr->val)
            {
               int temp=pre->val;
               pre->val=curr->val;
               curr->val=temp;
            }
            pre=pre->next;
        }

        curr=curr->next;
    }

    return head;
}
