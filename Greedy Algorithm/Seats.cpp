int Solution::seats(string str)
{
    vector<int> arr;
    for(int i=0;i<str.length();i++ )
    {
        if(str[i]=='x')
            arr.push_back(i);
    }

    int mid=arr.size()/2;

    int start=0,end=0;

    int ans=0;

    for(int i=0;i<arr.size();i++)
    {
        start=arr[i];
        end=arr[mid] - mid + i;

        ans = (ans + abs(start-end))%10000003;
    }

    return ans%10000003;
}
