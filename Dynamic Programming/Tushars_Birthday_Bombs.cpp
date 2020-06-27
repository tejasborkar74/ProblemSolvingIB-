vector<int> Solution::solve(int A, vector<int> &B)
{
    int m=INT_MAX,mI;

    for(int i=0;i<B.size();i++)
    {
        if(B[i]<m)
        {
            m=B[i];
            mI=i;
        }
    }

    vector<int> ans(A/m,mI);

    int curr=m*ans.size();

    int i=0,j=0;

    while(i<mI)
    {
        if (j >= ans.size() || curr == A) {
				return ans;
			}

			if (curr + B[i] - m <= A) {
				ans[j++] = i;
				curr = curr + B[i] - m;
			}

			else {
				i++;
			}
    }

    return ans;

}
