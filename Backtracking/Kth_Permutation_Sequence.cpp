string Solution::getPermutation(int n, int k)
{
    int arr[n];
   for(int i=1;i<=n;i++)
   {
       arr[i-1]=i;
   }

   for(int i=0;i<k-1;i++)
   {
       next_permutation(arr,arr+n);
   }

   string ans="";

   for(int i=0;i<n;i++)
   {
       ans+=to_string(arr[i]);
   }

   return ans;
}
