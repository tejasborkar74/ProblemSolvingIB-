void Solution::merge(vector<int> &A, vector<int> &B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0,j=0,k=0;
     int n=A.size(),m=B.size();

    vector<int> ans(n+m);



    while(i<n && j<m)
    {
        if(A[i]<=B[j])
        {
            ans[k]=A[i];
            i++;
        }
        else
        {
           ans[k]=B[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        ans[k]=A[i];
        i++;
        k++;
    }
    while(j<m)
    {
        ans[k]=B[j];
        j++;
        k++;
    }

    A=ans;

}
