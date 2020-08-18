int Solution::solve(string A)
{
    int  i=0 , j=A.length()-1;

    while(i<j)
    {
        if(A[i] == A[j])
        {
            i++;j--;
        }

        else
        {
            break;
        }
    }

    if(i>=j)return 1;

    int idx = i,jdx = j;

    //option1  i++

    i++;
    while(i<j)
    {
        if(A[i] == A[j])
        {
            i++;j--;
        }

        else
        {
            break;
        }
    }

    if(i>=j)return 1;


    i = idx , j=jdx-1;

    while(i<j)
    {
        if(A[i] == A[j])
        {
            i++;j--;
        }
        else
        {
            break;
        }
    }

    if(i>=j)return 1;

    return 0;


}
