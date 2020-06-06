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
int i=0;

void buildArr(TreeNode *root)
{
    if(root==NULL)return ;

    buildArr(root->left);
    arr.push_back(root->val);
    buildArr(root->right);
}
BSTIterator::BSTIterator(TreeNode *root)
{
    arr.clear();
    i=0;

    buildArr(root);


}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext()
{
    if(i<arr.size())return true;

    return false;
}

/** @return the next smallest number */
int BSTIterator::next()
{
    i=i+1;
    return arr[i-1];
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
