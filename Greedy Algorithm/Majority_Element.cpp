int Solution::majorityElement(const vector<int> &A)
{
    map<int,int> mp;
    int n=A.size();
    int num=n/2;

    for(int i=0;i<n;i++)
    {
            mp[A[i]]++;

            if(mp[A[i]] > num)
            {
                return A[i];
            }
    }


}
