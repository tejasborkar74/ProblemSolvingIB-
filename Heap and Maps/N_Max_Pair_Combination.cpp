vector<int> Solution::solve(vector<int> &a, vector<int> &b)
{
    //max 2 elements from a
    int n=a.size();

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

     priority_queue<pair<int,pair<int,int> >> q;

     map<pair<int,int> ,int>  m;

     q.push({a[n-1]+b[n-1],{n-1,n-1}});

     m[{n-1,n-1}]=1;

     int k=n;

    vector<int> ans;


     while(k)
    {

        pair<int, pair<int,int> > temp=q.top();

        ans.push_back(temp.first);
        q.pop();

        pair<int,int> p1={temp.second.first-1,temp.second.second};

        if(!m[p1])
        {
            q.push({a[p1.first]+b[p1.second],p1});
            m[p1]=1;
        }

        pair<int,int> p2={temp.second.first,temp.second.second-1};

        if(!m[p2])
        {
            q.push({a[p2.first]+b[p2.second],p2});
            m[p2]=1;
        }

        k--;
    }


     return ans;


}
