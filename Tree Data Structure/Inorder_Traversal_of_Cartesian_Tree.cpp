/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int find(vector<int> arr,int l,int r)
 {
     int maxI=arr[l];
     int idx=l;

     for(int i=l;i<=r;i++)
     {
         if(arr[i]>maxI)
         {
             maxI=arr[i];
             idx=i;
         }
     }

     return idx;
 }
 TreeNode* buildCar(vector<int>arr,int start,int end)
 {
     if(start>end)return NULL;

     int maxIdx=find(arr,start,end);

     TreeNode *root=new TreeNode(arr[maxIdx]);

     root->left=buildCar(arr,start,maxIdx-1);
     root->right=buildCar(arr,maxIdx+1,end);

     return root;
 }
TreeNode* Solution::buildTree(vector<int> &A)
{
    return buildCar(A,0,A.size()-1);
}
