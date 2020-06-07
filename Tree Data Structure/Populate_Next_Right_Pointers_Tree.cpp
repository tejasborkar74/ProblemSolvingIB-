/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root)
{
    if(root==NULL)return ;

    queue<TreeLinkNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        TreeLinkNode* f=q.front();


        if(f==NULL)
        {
            q.pop();

            if(!q.empty())
            {
                q.push(NULL);
            }
            else
            {
                break;
            }
        }

        f=q.front();

        q.pop();


        f->next=q.front();

        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
}
