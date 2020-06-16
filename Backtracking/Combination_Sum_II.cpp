vector<vector<int> > ans;

void answer(int i,vector<int> arr,int k,vector<int> temp)
{
     if(k==0)
    {
        sort(temp.begin(),temp.end());
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==temp)return;
        }
        ans.push_back(temp);
        return;
    }
    if(i==arr.size() || k<0)return ;



    if(arr[i]<=k)
    {
        temp.push_back(arr[i]);
        answer(i+1,arr,k-arr[i],temp);

        temp.pop_back();
        answer(i+1,arr,k,temp);
    }
    else
    {
        answer(i+1,arr,k,temp);
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int k)
{
    ans.clear();
    vector<int> temp;

    sort(A.begin(),A.end());

    answer(0,A,k,temp);

    return ans;

}
