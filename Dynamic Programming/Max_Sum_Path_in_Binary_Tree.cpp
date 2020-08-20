/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int ans =INT_MIN;

 int answer(TreeNode *root)
 {
     if(root==NULL)return 0;

     int l = answer(root->left);
     int r = answer(root->right);

     int toreturn = max(root->val , max(root->val+l , root->val+r) );

     int temp = max(toreturn , root->val+l+r);

     ans = max(ans,temp);

     return toreturn;
 }
int Solution::maxPathSum(TreeNode* A)
{
    ans =INT_MIN;
    answer(A);

    return ans;
}
