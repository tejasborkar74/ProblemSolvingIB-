int Solution::cpFact(int a, int b)
{
    int gcdVal=__gcd(a,b);

    //best case
    if(gcdVal==1)
    return a;
    else
    {
        while(gcdVal!=1)
        {
            a=a/gcdVal;
            gcdVal=__gcd(a,b);
        }
        return a;
    }

}
