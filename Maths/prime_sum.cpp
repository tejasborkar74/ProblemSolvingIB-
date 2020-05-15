bool  isprime(int num)
{
    if(num<=1)return false;
    if(num==2)return true;
    if(num%2==0)return false;

    for(int i=3;i*i<=num;i++)
    {
        if(num%i==0)return false;
    }
    return true;
}
vector<int> Solution::primesum(int n)
{
    vector<int> v(2);


    for(int i=2;i<n;i++)
    {
        if(isprime(i) && isprime(n-i))
        {
            v[0]=i;
            v[1]=n-i;
            return v;
        }
    }
    return v;
}
