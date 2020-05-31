int Solution::solve(vector<string> &A)
{
    vector<float> a,b,c;
    for(int i=0;i<A.size();i++)
    {
        float val=std::stof(A[i]);

        if(val>0 && val<(2.0/3))
        {
            a.push_back(val);
        }
        else if(val>=(2.0/3) && val< 1)
        {
            b.push_back(val);
        }
        else if(val>=1 && val<2)
        {
            c.push_back(val);
        }
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
     int n=a.size(),m=b.size(),k=c.size();


    if(a.size()>=3)
    {
        float temp=a[n-1] + a[n-2] + a[n-3];

        if(temp>1 && temp<2)return 1;
    }

    if(a.size()>=2 && b.size()>=1)
    {
        float temp=a[n-1] + a[n-2] + b[m-1];

        if(temp>1 && temp<2)return 1;

    }
    if(a.size()>=2 && c.size()>=1)
    {

        float temp=a[n-1] + a[n-2] + c[k-1];

        if(temp>1 && temp<2)return 1;
    }
    if(b.size()>=2 && a.size()>=1)
    {
        float temp=b[m-1] + b[m-2] + a[n-1];

        if(temp>1 && temp<2)return 1;
    }
    if(a.size()>=1 && b.size()>=1 && c.size()>=1)
    {
          float temp=a[n-1] + b[m-1] + c[k-1];

            if(temp>1 && temp<2)return 1;
    }

    return 0;
}
