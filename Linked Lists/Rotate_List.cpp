/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int length(ListNode *head)
 {
     int count=0;
     while(head)
     {
         head=head->next;
         count++;
     }

     return count;
 }
ListNode* Solution::rotateRight(ListNode* head, int k)
{
    ListNode *temp=head,*newHead,*start=head;
    int len=length(head);

    if(len<=k || k==0)
    {
        k=k%len;

        if(k==0)
            return head;
    }
    while(k)
    {
        head=head->next;
        k--;
    }

    while(head->next!=NULL)
    {
        head=head->next;
        temp=temp->next;
    }

    newHead=temp->next;

    temp->next=NULL;
    head->next=start;

    return newHead;

}
