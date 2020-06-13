/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int LCA(TreeNode *root,int a,int b)
 {
     if(root==NULL)return -1;

     if(root->val==a || root->val==b)
     {
         return root->val;
     }

     int l=LCA(root->left,a,b);
     int r=LCA(root->right,a,b);

     if(l==-1 && r==-1)return -1;

     if(l!=-1 && r!=-1)return root->val;

     return l!=-1 ? l:r;
 }
 bool hasroot(TreeNode *root,int a)
 {
     if(root==NULL)return false;

     if(root->val==a)return true;

     bool l=hasroot(root->left,a);
    bool r=hasroot(root->right,a);

    if(l==false && r==false)return false;

    return true;

 }
int Solution::lca(TreeNode* A, int B, int C)
{
    if(A==NULL)return -1;

    if(hasroot(A,B) && hasroot(A,C))
    {
         return LCA(A,B,C);
    }

    return -1;

}
