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


///ITERATIVE SOLUTION/////////////////////

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b)
{
    ListNode *c,*ans;
    if(a==NULL)return b;

     if(b==NULL)return a;

     if(a->val<b->val)
     {
         c=a;
         ans=c;
         a=a->next;
     }
     else
     {
         c=b;
         ans=c;
         b=b->next;
     }

     while(a&&b)
     {
         if(a->val < b->val)
         {
             c->next=a;
             a=a->next;
             c=c->next;
         }
         else
         {
            c->next=b;
            b=b->next;
            c=c->next;
         }
     }

     if(a)
     {
         c->next=a;
     }
     else if(b)
     {
         c->next=b;
     }

     return ans;

}
