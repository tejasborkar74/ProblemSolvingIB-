vector< vector<int> > ans;
vector<int> temp;

bool iscontain(vector<int> temp)
{
    if(ans.size()==0)return false;

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i].size()==temp.size() && (temp==ans[i]))return true;
    }

    return false;
}

void answer(vector<int> arr,int i,vector<int> temp)
{
    if(i==arr.size())
    {
        if(iscontain(temp)==false)
        {
            ans.push_back(temp);
        }

        return;
    }

    answer(arr,i+1,temp);

    temp.push_back(arr[i]);

    answer(arr,i+1,temp);

    temp.pop_back();
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A)
{

    ans.clear();
    temp.clear();
    sort(A.begin(),A.end());

    answer(A,0,temp);

     sort(ans.begin(),ans.end());


    return ans;
}
