/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* a, int k)
{
    ListNode *pre=NULL,*curr=a,*node=NULL;

    ListNode *fakeNode=new ListNode (0);
    fakeNode->next=a;
    node=fakeNode;
    pre=fakeNode;

    while(curr)
    {
        if(curr->val<k)
        {
            if(curr==node->next)
            {
                node=curr;
                 pre=curr;
                 curr=curr->next;
            }
            else
            {
                    pre->next=curr->next;
                    curr->next=node->next;
                    node->next=curr;
                    node=curr;
                    curr=pre->next;
            }

        }
        else
        {
           pre=curr;
            curr=curr->next;
        }

    }

    return fakeNode->next;
}
