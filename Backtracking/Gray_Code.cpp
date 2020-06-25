vector<int> Solution::grayCode(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> ans;

        for(int i=0;i<(1<<n);i++)
        {
            ans.push_back(i^(i>>1));
        }

        return ans;
}
