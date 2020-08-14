/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head, int k)
{
   ListNode *fake =new ListNode (0);

   fake->next = head;

   int n =0;

   ListNode *p ,*nxt,*c=head ,*pre =fake;

    while(head || head==NULL)
    {

        if(n%k==0 && (n/k)%2 ==1)//reverse
        {
            p=head;

            while(c!=head)
            {
                nxt=c->next;
                c->next = p;
                p= c;
                c=nxt;
            }

            pre->next = p;

        }
        else if(n%k==0 && (n/k)%2 ==0)
        {
            c = head;
        }
        else if((n+1)%k==0 && ((n+1)/k)%2 ==0)
        {
            pre = head;
        }

        n++;

        if(head==NULL)break;

        head=head->next;
    }

    return fake->next;
}
