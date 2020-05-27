string Solution::largestNumber(const vector<int> &A) {

    vector<int> arr = A;
    int n=arr.size();

    sort(arr.begin(),arr.end(),[](int a,int b){
        string s1 = to_string(a)+to_string(b);
        string s2 = to_string(b)+to_string(a);

        if(s1>=s2)
        return true;
        else
        return false;
    });


    string ans="";
    for(int i=0;i<n;i++)
    {
        ans += to_string(arr[i]);
    }

    if(ans[0]=='0')
    return "0";

    return ans;
}
