vector<int> Solution::nextPermutation(vector<int> &arr)
{
    int n=arr.size();

    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
           int s=i-1;
           int a=i;
           int t=i;

           for(int j=n-1;j>a;j--)
           {
               if(arr[j]>arr[s] && arr[j]<arr[t])
               {
                   t=j;
               }
           }

           //swap

           int temp =arr[t];
           arr[t]=arr[s];
           arr[s]=temp;

           s+=1;

           sort(arr.begin()+s,arr.end());

           return arr;
        }
    }

    sort(arr.begin(),arr.end());

    return arr;
}
