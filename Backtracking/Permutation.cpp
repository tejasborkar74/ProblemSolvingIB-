vector<vector<int> > ans;

void answer(vector<int> &arr,int i)
{
    if(i==arr.size())
    {
        ans.push_back(arr);
        return ;
    }

    for(int j=i;j<arr.size();j++)
    {
        swap(arr[i],arr[j]);

        answer(arr,i+1);

        //backtrack

        swap(arr[i],arr[j]);
    }


}
vector<vector<int> > Solution::permute(vector<int> &A)
{
    ans.clear();
    answer(A,0);

    return ans;
}
