/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverse(ListNode *temp)
 {
     ListNode *c=temp,*p=NULL,*n;

     while(c)
     {
         n=c->next;
         c->next=p;
         p=c;
         c=n;
     }

     return p;
 }
ListNode* Solution::reverseList(ListNode* head, int k)
{
    if(k==0|| k==1)return head;

    int j=1;
    ListNode *curr=head,*pre=NULL,*ans=head,*tail,*start;

    while(j<=k)
    {
        pre=curr;
        curr=curr->next;
        j++;
    }

    pre->next=NULL;

    ans=reverse(ans);
    tail=ans;

    while(tail->next)
    {
        tail=tail->next;
    }

    while(curr)
    {
        j=1;
        start=curr;
         while(j<=k)
        {
            pre=curr;
            curr=curr->next;
            j++;
        }
        pre->next=NULL;
         while(tail->next)
        {
            tail=tail->next;
        }
        tail->next=reverse(start);
    }

    return ans;
}
