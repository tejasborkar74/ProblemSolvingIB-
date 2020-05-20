vector<int> Solution::plusOne(vector<int> &A)
{
    int n=A.size();
    int borrow=0;

    for(int i=n-1;i>=0;i--)
    {
        if(A[i]==9)
        {
            A[i]=0;
            borrow=1;
        }
        else
        {
            A[i]=A[i]+1 ;
            borrow=0;
            break;
        }
    }


    //remove all front zeros
    vector<int> ans;

    if(borrow==1)
    {
        ans.push_back(1);

        for(int i=0;i<A.size();i++)
        {
            ans.push_back(A[i]);
        }
    }
    else
    {
         int flag=0;

        for(int i=0;i<A.size();i++)
        {
            if(A[i]!=0)
            {
                ans.push_back(A[i]);
                flag=1;
            }
            else if(A[i]==0 && flag==1)
            {
                ans.push_back(A[i]);
            }
        }
    }



    return ans;

}
