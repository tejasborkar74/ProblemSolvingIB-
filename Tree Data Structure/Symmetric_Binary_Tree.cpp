/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int answer(TreeNode *root,TreeNode *root2)
 {
     if(root==NULL && root2==NULL )return 1;

     if((root!=NULL && root2==NULL)||(root==NULL && root2!=NULL))return 0;

     if(root->val!=root2->val)return 0;

     int l=answer(root->left,root2->right);
     int r=answer(root->right,root2->left);

     if(l==1 && r==1)return 1;

     return 0;
 }
int Solution::isSymmetric(TreeNode* A)
{
    return answer(A,A);
}
