#define ll long long
#define mod 1000000007

ll powtwo(ll base,ll e)
{
    if(e<0){
        e+=mod-1;
    }
    ll ans=1;
    while(e){
        if(e&1)ans=(ans*base)%mod;
        base=(base*base)%mod;
        e/=2;
    }
    return ans;
}

int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end());
    ll fact[10000];
    fact[0] = 1;

    for(int i = 1;i < 10000;i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    vector<ll> arr;
    ll n = B.size();
    arr.push_back(B[0]-1);
    for(int i = 1;i < n;i++){
        arr.push_back(B[i]-B[i-1]-1);
    }
    arr.push_back(A-B[n-1]);
    ll ans = 1;
    ll sum = 0,pro = 1;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == 0) continue;
        if(i != 0 && i != arr.size()-1) ans = (ans*powtwo(2,arr[i]-1))%mod;
        sum = (sum + arr[i])%mod;
        pro = (pro*fact[arr[i]])%mod;
    }
    ans = (ans * fact[sum])%mod;
    ans = (ans * powtwo(pro,mod-2))%mod;
    return ans;
}
