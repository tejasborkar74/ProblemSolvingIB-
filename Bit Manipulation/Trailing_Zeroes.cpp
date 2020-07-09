int Solution::solve(int A)
{
    int count=0;
    while(A)
    {
        if(!(A&1))
        {
            count++;
        }
        else if(A&1)
        {
            break;
        }
        A=A>>1;
    }

    return count;
}
