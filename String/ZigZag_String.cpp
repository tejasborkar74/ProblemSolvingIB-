string Solution::convert(string A, int B)
{
    string ans ;

    if(B==1)return A;

    for(int i=0;i<B;i++)
    {
        int j = i;
        int start = 0,end = B-1;
        int op2 = abs(start-i)*2 , op1 = abs(end-i)*2;

        int f = 1;
        while(j<A.length())
        {
            ans.push_back(A[j]);

            if(op1 ==0 || op2 ==0)
            {
                j = j+ max(op1,op2);
            }

            else if( f==1 )
            {
                j = j+ op1;
            }
            else
            {
                j = j+op2;
            }

            f = f*-1;
        }
    }

    return ans;

}
