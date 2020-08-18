string Solution::solve(string A, int B)
{
    string ans ;
    for(int i=0;i<A.length();i++)
    {
        int j=i;
        int count=1;
        string curr ;
        curr.push_back(A[j]);
        while(j+1 < A.size() && A[j] == A[j+1] && count<B)
        {
            count++;
            curr.push_back(A[j+1]);
            j++;
        }

        if(count != B)
        {
           ans = ans + curr;
        }

         i = j;
    }

    return ans;
}
