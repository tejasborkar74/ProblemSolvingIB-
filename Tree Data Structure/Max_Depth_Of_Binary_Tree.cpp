/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int maxOf(int a,int b)
 {
     if(a>b)return a;

     return b;
 }
int Solution::maxDepth(TreeNode* A)
{
    if(A==NULL)return 0;

    int l=maxDepth(A->left);
    int r=maxDepth(A->right);

    return (maxOf(l,r)+1);
}
