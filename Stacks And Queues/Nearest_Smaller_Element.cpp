vector<int> Solution::prevSmaller(vector<int> &A)
{
    vector<int> ans = {-1};
    stack<int> s;
    s.push(A[0]);

    for(int i=1; i<A.size(); i++)
    {
       if(s.top()<A[i])
       {
           ans.push_back(s.top());
           s.push(A[i]);
       }
       else
       {
           while(!s.empty() && s.top()>=A[i])
           {
               s.pop();
           }
           if(s.empty())ans.push_back(-1);

           else
                ans.push_back(s.top());


            s.push(A[i]);
       }
    }
    return ans;
}
