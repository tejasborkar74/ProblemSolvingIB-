/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    stack<TreeNode*> s;

    if(A==NULL)return A;
    s.push(A);

    while(!s.empty())
    {
        TreeNode * curr=s.top();
        s.pop();

        if(curr->right)
        {
            s.push(curr->right);
        }

        if(curr->left)
        {
            s.push(curr->left);
        }

        if(!s.empty())
        {
            curr->right=s.top();
        }

        curr->left=NULL;
    }

    return A;
}
