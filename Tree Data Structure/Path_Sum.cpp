/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int answer(TreeNode* root,int sum,int curr )
 {
     if(root==NULL)return -1;

     if(root->left==NULL && root->right==NULL)
     {
         curr+=root->val;

         if(curr==sum)return 1;
     }
     curr+=root->val;
     int l=answer(root->left,sum,curr);
     int r=answer(root->right,sum,curr);

     if(l==1 || r==1)return 1;

     return -1;
 }
int Solution::hasPathSum(TreeNode* A, int sum)
{
    int ans=answer(A,sum,0);
    if(ans==-1)return 0;

    return 1;
}
