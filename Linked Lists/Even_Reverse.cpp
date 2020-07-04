/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A)
{
    ListNode *curr=A;

    curr=curr->next;//even posn

    if(curr==NULL || curr->next==NULL || curr->next->next==NULL)return A;

    vector<int> temp;

    while(curr)
    {
        temp.push_back(curr->val);

        if(curr->next==NULL)
        {
            curr=curr->next;
        }
        else
        {
             curr=curr->next->next;
        }


    }

    curr=A->next;

    int i=temp.size()-1;

    while(curr)
    {
        curr->val=temp[i--];

        if(curr->next==NULL)
        {
            curr=curr->next;
        }
        else
        {
            curr=curr->next->next;
        }
    }

    return A;
}
