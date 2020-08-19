int Solution::solve(string A)
{
    int n = A.length();
    int i= 0,j=A.length()-1;
    int p = 0;

    while(i<j)
    {
        int I=i,J=n-1;

        while(A[i] == A[j])
        {
            i++;j--;
        }

        if(i>=j)
        {
            return n-(J-I+1);
        }

        i= I+1;
        j=n-1;
    }

    return n-1;
}
