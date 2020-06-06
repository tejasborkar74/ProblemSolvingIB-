/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int> arr;
 void find(TreeNode *root)
 {
     if(root==NULL)return ;

     find(root->left);
     arr.push_back(root->val);
     find(root->right);
 }
vector<int> Solution::recoverTree(TreeNode* A)
{
    arr.clear();
    find(A);

    vector<int> temp=arr;
    vector<int> ans;
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=temp[i])
        {
            ans.push_back(arr[i]);
            ans.push_back(temp[i]);

            return ans;
        }
    }
}
