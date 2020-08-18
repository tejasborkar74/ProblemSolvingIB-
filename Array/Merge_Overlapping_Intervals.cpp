/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool compare(Interval a ,Interval b)
 {
     return a.start<b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    sort(A.begin() ,A.end() ,compare);

    if(A.size() <= 1)return A;

    vector<Interval> ans ;

    ans.push_back(A[0]);

    for(int i=1;i<A.size();i++)
    {
        Interval curr = A[i];
       int n = ans.size()-1;

        if(curr.end <= ans[n].end)
        {
            continue;
        }
        else if(curr.start <= ans[n].end)
        {
            ans[n].end = curr.end;
        }
        else if(curr.start > ans[n].end)
        {
            ans.push_back(curr);
        }
    }

    return ans;

}
