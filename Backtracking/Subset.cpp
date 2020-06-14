vector< vector<int> > ans;
    vector<int> temp;
void answer(vector<int> arr,int i,vector<int> temp)
{
    if(i==arr.size())
    {
        ans.push_back(temp);
        return;
    }

    answer(arr,i+1,temp);

    temp.push_back(arr[i]);

    answer(arr,i+1,temp);

    temp.pop_back();
}
vector<vector<int> > Solution::subsets(vector<int> &A)
{

    ans.clear();
    temp.clear();
    sort(A.begin(),A.end());

    answer(A,0,temp);

     sort(ans.begin(),ans.end());


    return ans;
}
