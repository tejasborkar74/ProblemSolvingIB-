/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int k=A.size();

    priority_queue<int,vector<int>,greater<int> > q;

    ListNode *ans;


    for(int i=0;i<k;i++)
    {
        ListNode *curr=A[i];

        while(curr)
        {
            q.push(curr->val);
            curr=curr->next;
        }
    }

    ListNode *head=new ListNode(q.top());
    q.pop();
    ListNode *temp=head;

    while(q.size())
    {
        temp->next=new ListNode(q.top());
        q.pop();

        temp=temp->next;
    }

    return head;

}
