/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B)
{
    ListNode *temp=A;

    int n=0;

    while(temp)
    {
        temp=temp->next;
        n++;
    }

    int tar = (n/2) + 1 - B;

    if(tar<=0)return -1;

    temp=A;

    while(temp)
    {
        tar--;
        if(tar==0)return temp->val;
        temp=temp->next;
    }
}
