vector<int> Solution::subUnsort(vector<int> &arr)
{
    int n=arr.size();

   vector<int> temp=arr;

   sort(temp.begin(),temp.end());
   int i,j;

   for(i=0;i<n;i++)
   {
       if(temp[i]!=arr[i])
       break;
   }

   for(j=n-1;j>=0;j--)
   {
       if(temp[j]!=arr[j])
       break;
   }

   vector<int> ans;

   if(i==n)
   {
       ans.push_back(-1);
       return ans;
   }

   ans.push_back(i);
   ans.push_back(j);
   return ans;

}
