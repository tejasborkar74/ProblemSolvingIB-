/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* merge(ListNode *a,ListNode *b)
 {
     if(a==NULL)return b;

     if(b==NULL)return a;

     ListNode *c;
     if(a->val<b->val)
     {
         c=a;
         c->next=merge(a->next,b);
     }
     else
     {
         c=b;
         c->next=merge(a,b->next);
     }

     return c;
 }
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b)
{
    return merge(a,b);

}
