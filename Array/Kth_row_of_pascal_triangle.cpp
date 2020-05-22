vector<int> Solution::getRow(int A) {

    vector<int> ans;

    ans.push_back(1);

    for (int i = 1; i <= A; i++)
    {
        int val = ((A - i + 1) * ans[i - 1]) / i;
        ans.push_back(val);
    }


    return ans;
}
