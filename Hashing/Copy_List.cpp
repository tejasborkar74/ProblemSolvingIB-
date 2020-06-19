/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* a)
{
    RandomListNode *head=NULL,*tail=NULL;

    map<RandomListNode* ,RandomListNode*> mp;


    RandomListNode *temp=a;
    while(a)
    {
        RandomListNode *n=new RandomListNode(a->label);
        mp[a]=n;

        if(head == NULL && tail == NULL)
        {
            head=n;
            tail=n;
        }

        else
        {
            tail->next=n;
            tail=tail->next;
        }

        a=a->next;

    }

    a=temp;
    RandomListNode *s=head;

    while(a)
    {
        s->random=mp[a->random];

        a=a->next;
        s=s->next;
    }

    return head;
}
