double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a=A.size(),b=B.size();



    if(a>b)return findMedianSortedArrays(B,A);

    int h=a,l=0;

    while(l<=h)
    {
        int midA=l + (h-l)/2;
        int midB=((a+b+1)/2) - midA;

        int maxLeftA = (midA==0) ? INT_MIN : A[midA-1];
        int minRightA = (midA==a) ? INT_MAX :A[midA];

        int maxLeftB = (midB==0) ? INT_MIN : B[midB-1];
        int minRightB = (midB==b) ? INT_MAX :B[midB];

        if(maxLeftA<=minRightB && maxLeftB<=minRightA)
        {
            //found correct Partition
            if((a+b)%2==0)
            {
                return (double)(max(maxLeftA,maxLeftB) + min(minRightA,minRightB))/2;
            }
            else
            {
                return (double)(max(maxLeftA,maxLeftB));
            }
        }

        else if(maxLeftA>minRightB)
        {
            h=midA-1;
        }
        else
        {
            l=midA+1;
        }


    }

    return -1;
}
