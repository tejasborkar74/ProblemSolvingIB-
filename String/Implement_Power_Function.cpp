#define ll long long

ll powfn(ll a,ll b,ll d)
{
    if(b==0||a==1)return 1;

    if(a==0)return 0;

    if(b%2==0)
    {
        ll temp=powfn(a,b/2,d)%d;
        temp=(temp*temp)%d;

        return temp;
    }

    ll u=a%d;

    return (u*(powfn(a,b-1,d)%d)%d);
}

int Solution::pow(int x, int n, int d)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    return (powfn(x,n,d) + d)%d;
}
