/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::reorderList(ListNode* A)
{
    ListNode *mid=A,*f=A->next;

    if(A==NULL || A->next==NULL || A->next->next==NULL)return A;

    //divide in 2 lists
    while(f && f->next)
    {
        mid=mid->next;
        f=f->next->next;
    }

    ListNode *B=mid->next;
    mid->next=NULL;

    //reverse B

    ListNode *p=NULL,*c=B,*n;

    while(c)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }

    B=p;


    //merge
    ListNode *curr=A,*ans=A;


    A=A->next;
    curr->next=B;
    B=B->next;
    curr=curr->next;

    while(B && A)
    {
        curr->next=A;
        A=A->next;
        curr=curr->next;

        curr->next=B;
        B=B->next;
        curr=curr->next;
    }

    if(A)
    {
        curr->next=A;
    }
    else if(B)
    {
        curr->next=B;
    }


     return ans;

}
