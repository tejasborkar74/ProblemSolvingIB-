int Solution::removeElement(vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> ans;
    int count=0;

    int i=0,n=A.size();
    if(n==0)return 0;

    while(i<n)
    {
        if(A[i]!=B)
        {
            ans.push_back(A[i]);
        }

        i++;
    }

    int temp=ans.size();

    A=ans;

    return temp;

}
