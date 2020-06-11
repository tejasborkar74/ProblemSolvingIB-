int maximum(vector<int> arr)
{
    int m=INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>m)m=arr[i];
    }

    return m;
}

int sumOFArray(vector<int> arr)
{
    int s=0;
    for(int i=0;i<arr.size();i++)
    {
        s+=arr[i];
    }

    return s;
}

bool isValid(vector<int> arr,int k,int mid)
{
     int sum=0;
     int stud=1;
//     //int valid=0;
     for(int i=0;i<arr.size();i++)
     {
         sum+=arr[i];

         if(sum>mid)
         {
             stud++;
             sum=arr[i];

             if(stud>k)return false;
         }
     }



   return true;

}
int Solution::books(vector<int> &arr, int k)
{
    int s=maximum(arr);

    int e=sumOFArray(arr);

    int n=arr.size(),ans=-1;

    if(n<k)return -1;

    while(s<=e)
    {
        int mid= s+(e-s)/2;

        if(isValid(arr,k,mid))
        {
            ans=mid;

            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    return ans;
}
