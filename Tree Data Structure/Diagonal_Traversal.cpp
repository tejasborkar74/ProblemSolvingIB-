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



 // USING RECURSION

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




// USING QUEUE


vector<int> Solution::solve(TreeNode* root)
{
    queue<TreeNode*> q;

    q.push(root);

    vector<int> ans;

    while(!q.empty())
    {
        TreeNode *f = q.front();

        q.pop();

        while(f)
        {
            ans.push_back(f->val);
            if(f->left)q.push(f->left);
            f = f->right;
        }
    }

    return ans;
}
