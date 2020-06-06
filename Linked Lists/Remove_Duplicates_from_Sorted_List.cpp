/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head)
{
    ListNode *pre=head;
    ListNode *ans=head;
    head=pre->next;

    while(head!=NULL)
    {
        if(pre->val==head->val)
        {
            //delete head
            pre->next=head->next;
            ListNode *temp=head;
            head=pre->next;
            delete temp;
        }
        else
        {
              pre=head;
        head=head->next;

        }
    }

    return ans;
}
