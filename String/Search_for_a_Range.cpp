int search(const vector<int> &arr,int k,bool flag)
{
    int s=0,e=arr.size()-1;
    int mid=(s+e)/2;
    int answer=-1;

    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==k)
        {
            answer=mid;

            if(flag)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }

        }

        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    return answer;
}

vector<int> Solution::searchRange(const vector<int> &arr, int k)
{
    int n=arr.size();

    vector<int> ans;
    ans.push_back(search(arr,k,true));
    ans.push_back(search(arr,k,false));

    return ans;

}
