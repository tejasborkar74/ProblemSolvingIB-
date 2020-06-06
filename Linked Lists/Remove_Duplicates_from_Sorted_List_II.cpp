/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head)
{
    if(!head || !head->next)
        return head;

    ListNode* fakeHead = new ListNode(0);
    fakeHead->next = head;
    ListNode* prev = fakeHead;
    while (head)
    {
        while (head->next && head->val == head->next->val)
        {
            head = head->next;
        }


        if (prev->next == head)
        {
            prev = prev->next;
        }

        else
        {
           prev->next = head->next;
        }


        head= head->next;
    }
    return fakeHead->next;
}
