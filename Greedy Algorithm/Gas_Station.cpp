int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B)
{
    vector<int> arr(A.size());
    int val =0;

    for(int i=0;i<A.size();i++)
    {
        arr[i] = A[i] - B[i];
        val+= arr[i];

    }

    if(val < 0)return -1;

    for(int i=0;i<A.size();i++)
    {
        if(arr[i] > 0)
        {
            int temp = arr[i] , f=1;
            int j = (i+1)%A.size();

            for( ;j!=i;j=(j+1)%A.size())
            {
                temp += arr[j];
                if(temp < 0)
                {
                    f=0;
                    break;
                }
            }

            if(f==1)return i;

        }
    }

    return 0;
}
