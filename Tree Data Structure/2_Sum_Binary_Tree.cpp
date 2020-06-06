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

 void buildVec(TreeNode *root)
 {
     if(root==NULL)return ;

     buildVec(root->left);
     arr.push_back(root->val);
     buildVec(root->right);
 }
int Solution::t2Sum(TreeNode* A, int B)
{
    arr.clear();

    buildVec(A);

    int i=0,j=arr.size()-1;

    while(i<j)
    {
        if(arr[i]+arr[j] < B)
        {
            i++;
        }
        else if(arr[i]+arr[j] > B)
        {
            j--;
        }
        else
        return 1;

    }

    return 0;
}
