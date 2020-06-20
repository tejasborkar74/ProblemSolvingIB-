/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A)
{
    queue<TreeNode*> q;

    vector<vector<int> > ans;

    if(A==NULL)return ans;

    q.push(A);
    q.push(NULL);

    vector<int > curr;


    while(!q.empty())
    {
       TreeNode *temp=q.front();

       if(temp==NULL)
       {
           q.pop();

               ans.push_back(curr);


               curr.clear();

               if(!q.empty())
               {
                   q.push(NULL);
               }
               else
               {
                   return ans;
               }

       }

       temp=q.front();
       curr.push_back(temp->val);
       q.pop();

       if(temp->left)
       {
           q.push(temp->left);
       }

       if(temp->right)
       {
           q.push(temp->right);
       }
    }

    return ans;
}
