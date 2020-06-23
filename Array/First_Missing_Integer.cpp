int Solution::firstMissingPositive(vector<int> &arr)
{
    sort(arr.begin(),arr.end());

    int n=arr.size();

   int ans=1,i=0;

   for(i=0;i<n;i++)
   {
       if(arr[i]>0)break;
   }

   if(arr[i]!=1)return 1;
   i++;

   int j=2;

   for(j=2;j<=arr[n-1];)
   {
       if(j<arr[i])return j;

       if(arr[i]==j)j++;

       i++;
   }

   return j;
}
