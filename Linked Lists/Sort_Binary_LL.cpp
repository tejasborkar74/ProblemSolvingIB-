/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A)
{
    ListNode *pre=A,*head=A;

    while(head)
    {
        if(head->val==0 && pre->val==0)
        {
            head=head->next;
            pre=pre->next;
        }

        else if(head->val==1 && pre->val==1)
        {
            head=head->next;
        }

        else if(head->val==0 && pre->val==1)
        {
            //swap
            swap(head->val , pre->val);
            head=head->next;
            pre=pre->next;

        }


    }

    return A;
}
