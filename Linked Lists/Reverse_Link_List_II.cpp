/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int m, int n)
{

    if(m==n)return head;

    if(head==NULL)return NULL;

    int i=1;
    ListNode *fakehead=new ListNode(0);
    fakehead->next=head;
    ListNode *p,*c,*nx,*start=fakehead,*end;


    while(i<m)
    {
        start=start->next;
        i++;
    }

    end=start->next;
    c=start->next;
    while(i<n)
    {
        end=end->next;
        i++;
    }

    p=end->next;

    start->next=end;
    int j=m;

    while(j<=n)
    {
        nx=c->next;
        c->next=p;
        p=c;
        c=nx;
        j++;
    }

    return fakehead->next;


}
