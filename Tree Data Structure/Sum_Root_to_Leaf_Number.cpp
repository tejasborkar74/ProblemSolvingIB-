/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int total=0;
 void findsum(TreeNode *root,int sum)
 {
     if(root==NULL)return;

     if(root->left==NULL && root->right==NULL)
     {
         sum=sum*10+root->val;

         total=(total+sum)%1003;
     }

     sum=(sum*10 +root->val)%1003;
     findsum(root->left,sum);
     findsum(root->right,sum);
 }
int Solution::sumNumbers(TreeNode* A)
{
    total=0;
    findsum(A,0);

    return (total%1003);
}
