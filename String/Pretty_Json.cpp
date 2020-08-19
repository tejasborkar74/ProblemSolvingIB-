vector<string> Solution::prettyJSON(string A)
{
    vector<string> ans;
    string curr;
    int idn =0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] == '{' || A[i]=='[')
        {
            curr.push_back(A[i]);
            ans.push_back(curr);
            curr="";
            idn++;
            int j=0;
            while(j<idn)
            {
                curr+= "\t";
                j++;
            }
        }
        else if(A[i+1]=='{' ||A[i+1]=='[' || A[i] == ',')
        {
            curr.push_back(A[i]);
            ans.push_back(curr);
            curr="";
            int j=0;
           while(j<idn)
            {
                curr+= "\t";
                j++;
            }
        }
        else if(A[i]=='}' ||A[i]==']')
        {
            if(curr.length()>=1)ans.push_back(curr);

            curr="";
            idn--;
            int j=0;
           while(j<idn)
            {
                curr+= "\t";
                j++;
            }
            curr.push_back(A[i]);
            if(A[i+1] != ',')
            {
                ans.push_back(curr);
                curr="";
            }

        }
        else{
            curr.push_back(A[i]);
        }


    }


    return ans;
}
