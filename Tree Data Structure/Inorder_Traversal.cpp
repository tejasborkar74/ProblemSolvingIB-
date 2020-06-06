/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root)
{
    vector<int> ans;

   TreeNode *curr=root;

   stack<TreeNode *> st;

   while(curr!=NULL || st.empty()==false)
   {
       while(curr!=NULL)
       {
           st.push(curr);
           curr=curr->left;
       }

       curr=st.top();
       st.pop();
       ans.push_back(curr->val);

       curr=curr->right;
   }

   return ans;
}
