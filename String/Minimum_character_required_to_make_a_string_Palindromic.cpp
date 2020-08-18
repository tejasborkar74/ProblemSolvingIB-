//O(N^2)
int Solution::solve(string A)
{
    int n= A.length();
    int j=0;
    int idx;

    for(int i=n-1;i>0;i--)
    {
        idx = i , j=0;
        while(A[i] == A[j] && i>j)
        {
            i--;j++;
        }

        if(i<=j)
        {
            return n-1-idx;
        }

        i= idx;
    }

    return n-1;
}

//O(n)

int Solution::solve(string A)
{
   int j = A.size()-1;
   int i = 0;


   while(j>0)
   {
       int i=0;
       while(A[i] == A[j])
        {
            j--;
            i++;
        }
        if(i>=j)return A.size()-(jdx +1);
        else
        {
            j = j -1;
        }
   }

   return A.size()-1;
}
