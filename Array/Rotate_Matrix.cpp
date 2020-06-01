void Solution::rotate(vector<vector<int> > &mat)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

int n=mat.size();

    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-1-i;j++)
        {
            //swap 4 places

            int temp,temp2;

            temp=mat[j][n-1-i];

            mat[j][n-1-i]=mat[i][j];

            temp2=mat[n-1-i][n-1-j];

            mat[n-1-i][n-1-j]=temp;

            temp=mat[n-1-j][i];

            mat[n-1-j][i]=temp2;

            mat[i][j]=temp;
        }
    }

}
