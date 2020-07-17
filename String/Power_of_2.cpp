int Solution::power(string A)
{
    long double num = stold(A);

    if(num<2)return 0;

    return (floor(log2(num))==ceil(log2(num))) ? 1 : 0;
}
