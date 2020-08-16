int answer(vector<int> &arr,int j,int sum,int curr,int n)
{
    if(n==3 && j<arr.size())return 1;

    if(j>=arr.size())return 0;

    int ans =0;

    for(int i=j;i<arr.size();i++)
    {
        curr+=arr[i];
        if(curr==sum/3)
        {
            ans += answer(arr,i+1,sum,0,n+1);
        }

    }

    return ans;


}
int Solution::solve(int n, vector<int> &arr)
{
    int sum = 0;

    for(int  i:arr)
    {
        sum+=i;
    }

    if(sum%3!=0)return 0;

    return answer(arr,0,sum,0,1);
}
