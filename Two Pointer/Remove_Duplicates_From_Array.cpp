int Solution::removeDuplicates(vector<int> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int n=A.size();
    if(n==0)
    {
        return 0;
    }
    vector<int> ans;
    int i=0,count=0;

    while(i<n)
    {
        if(i==n-1)
        {
             ans.push_back(A[i]);
        }
        else if(A[i]!=A[i+1])
        {
            ans.push_back(A[i]);
        }
        else
        {
            count++;
        }
        i++;
    }
    int temp=ans.size();

    A=ans;

    return temp;
}
