int Solution::removeDuplicates(vector<int> &A)
{

    int n=A.size();
    if(n==0)return 0;

    int i=0;
    vector<int> ans;

    while(i<n)
    {
        if(i==n-1)
        {
            ans.push_back(A[i]);
        }
        else if(i==n-2)
        {
            ans.push_back(A[i]);
        }
        else if(A[i]!=A[i+2])
        {
            ans.push_back(A[i]);
        }

        i++;

    }

    int temp=ans.size();

    A=ans;

    return temp;
}
