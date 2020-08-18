/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool compare(Interval a,Interval b)
 {
     return a.start < b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval a)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    intervals.push_back(a);
    sort(intervals.begin() ,intervals.end() ,compare);

    if(intervals.size() <= 1)return intervals;

    vector<Interval> ans;
    ans.push_back(intervals[0]);

    //merge

    for(int i=1;i<intervals.size();i++)
    {
        Interval curr = intervals[i];
        int n = ans.size()-1;

        if(ans[n].end >= curr.end)
        {
            continue;
        }

        else if(ans[n].end >= curr.start)
        {
            ans[n].end = curr.end;
        }

        else
        {
            ans.push_back(curr);
        }
    }

    return ans;



}
