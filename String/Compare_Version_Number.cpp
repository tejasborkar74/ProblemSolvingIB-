int compare(string a,string b)
{
     if( a.length()  > b.length())return 1;

    else if(a.length() < b.length())return -1;

    else if(a.length() == b.length())
    {
        int i=0,j=0;

        for(int i=0,j=0;i<a.length();i++,j++)
        {
            if(a>b)return 1;

            if(b>a)return -1;
        }
    }

    return 0;
}
int answer(string A,string B,int i,int j)
{
    string a ,b;

    if(i>=A.length() && j>=B.length())return 0;

    else if(i>=A.length() && j<B.length())
    {
        return -1;
    }
    else if(i<A.length() && j>=B.length())return 1;


    for(i;i<A.length();i++)
    {
        if(A[i] == '.')break;

        a.push_back(A[i]);
    }

    for(j;j<B.length();j++)
    {
        if(B[j] == '.')break;

        b.push_back(B[j]);
    }
    if( a.length() > b.length())return 1;

    else if(a.length() < b.length())return -1;

    else if(a.length() == b.length())
    {

        int next = compare(a,b);

        if(next != 0)return next;

    }


    return answer(A,B,i+1,j+1);

}
string merge(string A)
{
    string ans;
    int i=0;

        while(A[i] == '0')
        {
            i++;
        }

        while(i<A.length())
        {
            ans.push_back(A[i]);
           if(A[i] == '.')
           {
               i++;
               while( i<A.length() && A[i] == '0' && A[i+1] !='.')
               {
                   i++;
               }
           }
           else
           {
               i++;
           }
        }

    return ans;

}
int Solution::compareVersion(string A, string B)
{
    int i=0,j=0;

    A=merge(A);
    B=merge(B);
    return answer(A,B,i,j);
}
