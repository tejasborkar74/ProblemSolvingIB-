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
ListNode* Solution::removeNthFromEnd(ListNode* head, int k)
{
    if(head->next==NULL && k==1)return NULL;

    int len=length(head);

    if(k>=len)
    {
        ListNode *del=head;
        head=head->next;
        delete del;

        return head;
    }


    int jump=k;
    ListNode *temp=head;

    while(jump>0)
    {
        temp=temp->next;
        jump--;
    }

    ListNode *curr=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
        curr=curr->next;
    }

    ListNode *del=curr->next;

    curr->next=del->next;

    delete del;

    return head;

}
