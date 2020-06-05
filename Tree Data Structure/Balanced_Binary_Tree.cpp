/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 pair<int,int> answer(TreeNode *root)
 {
     if(root==NULL)return make_pair(0,1);

    pair<int,int> l=answer(root->left);
    pair<int,int> r=answer(root->right);

    if(abs(r.first - l.first)<=1 && r.second==1 && l.second==1)
    {
       return make_pair(max(r.first,l.first)+1,1);
    }

    return make_pair(max(r.first,l.first)+1,0);
 }


int Solution::isBalanced(TreeNode* root)
{
   pair<int,int> a=answer(root);

   return a.second;

}
