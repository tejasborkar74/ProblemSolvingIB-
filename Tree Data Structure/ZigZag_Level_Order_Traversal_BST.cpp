/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<vector<int> > ans;


 void bfs(TreeNode *root)
 {
     queue<TreeNode*> q;
     q.push(root);
     q.push(NULL);
     vector<int> temp;
     temp.clear();
     int flag=1;//L->R
     stack<int> s;

     while(!q.empty())
     {
         TreeNode *f=q.front();
         if(f==NULL)
         {
             if(flag==-1)
             {
                temp.clear();

                while(!s.empty())
                {
                    temp.push_back(s.top());
                    s.pop();
                }

                ans.push_back(temp);
             }
             else
             {
                 ans.push_back(temp);
             }

             temp.clear();
             q.pop();

             flag*=-1;

             if(!q.empty())
             {
                 q.push(NULL);
             }
             else
             {
                 return;
             }
         }

         f=q.front();
         q.pop();

         if(flag==1)
         {
            temp.push_back(f->val);
         }
         else
         {
             s.push(f->val);
         }

         if(f->left)
         {
             q.push(f->left);
         }
         if(f->right)
         {
             q.push(f->right);
         }
     }

     return ;
 }

vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A)
{
    ans.clear();
    bfs(A);

    return ans;
}
