/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A)
{
    if(A==NULL)return NULL;

    TreeNode *left=invertTree(A->right);
    TreeNode *right=invertTree(A->left);

    A->left=left;
    A->right=right;

    return A;


}
