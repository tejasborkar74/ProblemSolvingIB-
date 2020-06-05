/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int> ans;
 int countk=0,a=-1;
 void Inorder(TreeNode *root)
 {
     if(root==NULL)return  ;
    // if(root->val==-1)return ;

     Inorder(root->left);
    ans.push_back(root->val);

     Inorder(root->right);

 }
int Solution::kthsmallest(TreeNode* A, int B)
{
    Inorder(A);

    int a=ans[B-1];
    ans.clear();

    return a;

    // for(int i=0;i<ans.size();i++)
    // {
    //     if(i==k)return ans[i];
    // }

}
