int Solution::searchInsert(vector<int> &arr, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int s=0,e=arr.size()-1;
    int ans=0;

    while(s<=e)
    {
        int midIdx=(s+e)/2;

        if(arr[midIdx]==b)return midIdx;

        else if(arr[midIdx]<b )
        {
            s=midIdx+1;
            ans=s;
        }

        else
        {
            ans=midIdx;
            e=midIdx-1;

        }
    }

    return ans;


}


