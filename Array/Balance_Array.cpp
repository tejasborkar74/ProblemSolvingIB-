int Solution::solve(vector<int> &arr)
{
    int n = arr.size();
    vector<pair<int,int> > start(n) ,end(n);

    int o=0,e= 0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e+=arr[i];
        }
        else
        {
            o+= arr[i];
        }

        start[i]= {o,e};

    }

    o=0,e=0;

    for(int i=n-1;i>=0;i--)
    {
        if(i%2==0)
        {
            e+=arr[i];
        }
        else
        {
            o+= arr[i];
        }

        end[i] = {o,e};

    }

    int count=0;

    for(int i=0;i<n;i++)
    {
        int a= start[i].first,b=start[i].second,c=end[i].first,d=end[i].second;
        if(a+d == b+c)count++;
    }

    return count;
}
