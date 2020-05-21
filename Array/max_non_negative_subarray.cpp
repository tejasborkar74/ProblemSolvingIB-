#define ll long long
vector<int> Solution::maxset(vector<int> &A)
{
    ll cm=-1,max=0;
    int ci=0,cj=0,i=-1,j=-1;
    for(int x=0;x<A.size();x++)
    {
        if(A[x]>=0 && x!=A.size()-1)
        {
            if(cm==-1)//new start
            {
                cm+=A[x]+1;
                ci=x;
                cj=x;
            }else
            {
                cm+=A[x];
                cj=x;
            }
        }
        else if(A[x]<0)
        {

            if(cm==-1)
            continue;

            if(max>cm)
            {
                cm=-1;
            }
            else if(max<cm)
            {
                max=cm;
                i=ci;
                j=cj;
                cm=-1;
            }
            else//tie
            {
                if(j-i < cj-ci)
                {
                   i=ci;
                    j=cj;
                }
                cm=-1;
            }
        }
        else if(x==A.size()-1 && A[x]>=0)
        {

            if(cm==-1)//new start
            {
                cm+=A[x]+1;
                ci=x;
                cj=x;
            }
            else
            {
                cm+=A[x];
                cj=x;
            }

            //now check also
            if(max>cm)
            {
                cm=-1;
            }
            else if(max<cm)
            {
                max=cm;
                i=ci;
                j=cj;
                cm=-1;
            }
            else//tie
            {
                if(j-i < cj-ci)
                {
                   i=ci;
                    j=cj;
                }
                cm=-1;
            }

        }
    }

    //copy in vector

    vector <int> ans;
    for(int x=i;x<=j;x++)
    {
        ans.push_back(A[x]);
    //   cout<<A[x]<<" ";
    }
    if(j==-1)
    {
        return {};
    }

    return ans;
}
