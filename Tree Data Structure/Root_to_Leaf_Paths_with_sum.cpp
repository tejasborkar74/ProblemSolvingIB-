/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector< vector<int> > ans;

 void paths(TreeNode *root ,int sum,int curr,vector<int> vec)
 {
     if(root==NULL)return;

     if(root->left==NULL && root->right==NULL)
     {
         curr+=root->val;
         if(sum==curr)
         {
             vec.push_back(root->val);
             ans.push_back(vec);
             return;
         }
         return;
     }
     curr+=root->val;
     vec.push_back(root->val);
     paths(root->left,sum,curr,vec);
     paths(root->right,sum,curr,vec);
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B)
{
    vector<int> vec;
    ans.clear();
    vec.clear();

    paths(A,B,0,vec);
    return ans;
}
