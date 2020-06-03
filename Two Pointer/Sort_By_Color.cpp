void Solution::sortColors(vector<int> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l=0,r=A.size()-1;

    int i=0;

    while(i<=r)
    {
        if(A[i]==0)
        {
            swap(A[i],A[l]);
            i++;
            l++;
        }
        else if(A[i]==1)
        {
            i++;
        }
        else
        {
            swap(A[i],A[r]);
            r--;
        }
    }


}
