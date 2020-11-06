/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //unordered_map<TreeNode* , int> mp;

 map<int,vector<int> > ans;

 void assignvalues(TreeNode *root,int a)
 {
     if(root==NULL)return ;

     ans[a].push_back(root->val);

     assignvalues(root->left,a+1);
     assignvalues(root->right,a);
 }
vector<int> Solution::solve(TreeNode* A)
{
    ans.clear();
    assignvalues(A,0);

    vector<int> arr;

    for(auto it : ans)
    {
        vector<int> v = it.second ;
        arr.insert(arr.end() , v.begin() , v.end());
    }
    return arr;
}
