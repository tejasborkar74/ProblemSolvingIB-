vector<int> Solution::flip(string A)
{
    int n=A.length();
    int l=0,r=0,count=0,countMax=INT_MIN,ltemp=0,c=0;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        if(A[i]=='0')c++;
    }

    if(c==0)return ans;

    for(int i=0;i<n;i++)
    {
        if(A[i]=='0')count++;
        else if(A[i]=='1')count--;


        if(count>countMax)
        {
            countMax=count;
            l=ltemp;
            r=i;
        }

        if(count<0)
        {
            count=0;
            ltemp=i+1;

        }
    }


    ans.push_back(l+1);
    ans.push_back(r+1);

    return ans;
}
