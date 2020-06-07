/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* a, ListNode* b)
{

    if(a==NULL)return b;

    if(b==NULL) return a;

   ListNode *ans=new ListNode((a->val +b->val)%10);
   ListNode *curr=ans;
   int carry = (a->val +b->val)/10;


   a=a->next;
   b=b->next;

   while(a || b || carry)
   {
       int sum=(a ? a->val : 0) + (b ? b->val :0) +carry;

       carry = sum/10;

       curr->next=new ListNode(sum%10);
       curr=curr->next;

       if(a)a=a->next;

       if(b)b=b->next;

   }
   return ans;


}
