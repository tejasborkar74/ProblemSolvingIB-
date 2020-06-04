/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int minOF(int a,int b)
 {
     if(a<b)return a;

     return b;
 }
int Solution::minDepth(TreeNode* A)
{
    if(A==NULL)return 0;

    if(A->left==NULL && A->right==NULL)return 1;

    int l,r;
    if(A->left==NULL)
        l=INT_MAX;

    else
        l=minDepth(A->left);

    if(A->right==NULL)
        r=INT_MAX;
    else
        r=minDepth(A->right);


    return minOF(l,r)+1;
}
