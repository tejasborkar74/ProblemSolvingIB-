int Solution::cntBits(vector<int> &A) {

    int mod = 1e9+7;
    long sum=0;

    for(int i=0;i<32;i++)
    {
        long one=0,zero=0;
          for(int j=0;j<A.size();j++)
          {
              if((A[j]&(1<<i))!=0)
              one++;
              else
              zero++;
          }
          sum = (sum%mod + (2*(one%mod)*(zero%mod))%mod) %mod;

    }
    return sum%mod;
}




//BRUTEFORCE

//int mod=1e9+7;

// int countInX(int x)
// {
//     int count=0;
//     while(x)
//     {
//         if(x&1==1)
//         {
//             count=(count+1)%mod;
//         }

//         x=(x>>1);
//     }

//     return count%mod;
// }

// int Solution::cntBits(vector<int> &A)
// {
//     int n=A.size();
//     int diff=0;

//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             int x=(A[i]^A[j]);

//             diff=(diff+countInX(x))%mod;

//         }
//     }

//     return (2*diff)%mod;
// }
