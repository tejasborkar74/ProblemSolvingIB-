vector<int> NSL(vector<int> arr,int n)
{
    vector<int> ans;
    stack<int> st;

    for(int i=0;i<n-1;i++)
    {
        if(st.empty())
        {
            ans.push_back(-1);
            st.push(i);
        }
        else
        {
                while( !st.empty() && arr[st.top()]>=arr[i] )
                {
                    st.pop();
                }
            if(st.empty())
            {
                ans.push_back(-1);
                st.push(i);
            }
            else
            {
                ans.push_back(st.top());
                st.push(i);
            }
        }
    }

    return ans;
}
vector<int> NSR(vector<int> arr,int n)
{
    vector<int> ans(n-1);
    stack<int> st;

    for(int i=n-2;i>=0;i--)
    {
        if(st.empty())
        {
            ans[i]=n-1;
            st.push(i);
        }
        else
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i]=n-1;
                st.push(i);
            }
            else
            {
                ans[i]=st.top();
                st.push(i);
            }

        }
    }

    return ans;
}
int MAH(vector<int> arr,int n)
{
    vector<int> right = NSR(arr,n);
    vector<int> left = NSL(arr,n);

    int area=0;

    for(int i=0;i<n-1;i++)
    {
        int width = right[i]-left[i]-1;
        area=max(area,width*arr[i]);
    }

    return area;
}
int Solution::maximalRectangle(vector<vector<int> > &A)
{
    vector<vector<int> > arr=A;

    int ans=0;

    arr[0].push_back(0);

    ans=MAH(arr[0],arr[0].size());
    for(int i=1;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(A[i][j]==1)
            {
                arr[i][j]=arr[i-1][j]+1;
            }
        }

        arr[i].push_back(0);

        ans = max(ans, MAH(arr[i],arr[i].size()));
    }

    return ans;


}
