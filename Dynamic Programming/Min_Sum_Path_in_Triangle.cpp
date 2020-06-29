int Solution::minimumTotal(vector<vector<int> > &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > dp=A;

    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=A[i].size()-1;j>=0;j--)
        {
            dp[i][j]=min(dp[i+1][j],dp[i+1][j+1]) + A[i][j];
        }
    }

    return dp[0][0];
}
