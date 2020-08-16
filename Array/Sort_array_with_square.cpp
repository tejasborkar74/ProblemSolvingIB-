vector<int> Solution::solve(vector<int> &A)
{
    int i,j;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)break;
    }

    j=i-1;

    vector<int> ans ;


        while(i<A.size() && j>=0)
        {
            if(abs(A[i]) < abs(A[j]))
            {
                ans.push_back(A[i]*A[i]);
                i++;
            }
            else
            {
                ans.push_back(A[j]*A[j]);
                j--;
            }
        }

        while(i<A.size()){
             ans.push_back(A[i]*A[i]);
                i++;
        }

        while(j>=0)
        {
            ans.push_back(A[j]*A[j]);
                j--;
        }

    return ans;
}
