vector<int> NSL(vector<int> arr)
{
    int n=arr.size();
    vector<int> l;

    stack< pair<int,int> > s;

    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            l.push_back(-1);
        }
        else if(!s.empty() && s.top().first<arr[i])
        {
            l.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>=arr[i])
        {
            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }

            if(s.empty())
            {
                l.push_back(-1);
            }
            else
            {
                l.push_back(s.top().second);
            }
        }

        s.push({arr[i],i});
    }

    return l;
}

vector<int> NSR(vector<int> arr)
{
    int n=arr.size();
     vector<int> r;

    stack< pair<int,int> > s;

    for(int i=n-1;i>=0;i--)
    {
         if(s.empty())
        {
            r.push_back(n);
        }
        else if(!s.empty() && s.top().first<arr[i])
        {
            r.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>=arr[i])
        {
            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }

            if(s.empty())
            {
                r.push_back(n);
            }
            else
            {
                r.push_back(s.top().second);
            }
        }

        s.push({arr[i],i});
    }

    reverse(r.begin(),r.end());

    return r;


}
int Solution::largestRectangleArea(vector<int> &A)
{
    vector<int> left=NSL(A);
    vector<int> right=NSR(A);

    vector<int> width;

    for(int i=0;i<left.size();i++)
    {
       width.push_back(right[i]-left[i]-1);
    }

    int m=INT_MIN;

    for(int i=0;i<width.size();i++)
    {
        int  area=width[i]*A[i];
        if(area>m)
        {
            m=area;
        }
    }

    return m;
}
