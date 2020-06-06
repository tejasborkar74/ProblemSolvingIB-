/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* head)
{
    stack<int> s;
    ListNode *temp=head;

    while(head!=NULL)
    {
        s.push(head->val);
        head=head->next;
    }

    while(temp!=NULL)
    {
        if(temp->val != s.top())return 0;

        s.pop();
        temp=temp->next;
    }

    return 1;
}
