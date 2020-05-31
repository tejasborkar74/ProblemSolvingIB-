int Solution::maximumGap(const vector<int> &A) {

    int n = A.size();
    int mx=-1;

    int left[n],right[n];
    left[0]=A[0];
    right[n-1]=A[n-1];


    for(int i=1;i<n;i++)
    left[i] = min(left[i-1],A[i]);

    for(int j=n-2;j>=0;j--)
    right[j] = max(right[j+1],A[j]);


    int i=0,j=0;

    while(i<n && j<n)
    {
        if(left[i]<=right[j])
        {
            mx = max(mx,j-i);
            j++;
        }
        else
        i++;
    }



    return mx;
}
