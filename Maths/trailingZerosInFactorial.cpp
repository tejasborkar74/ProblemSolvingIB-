int Solution::trailingZeroes(int A)
{
    int sum=0;

    while(A)
    {
        sum= sum+ A/5;
        A=A/5;
    }
    return sum;
}
