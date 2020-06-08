int fun(int a,int b,string op) // need to use string& op because op is pointer
{
    if(op=="+") return(a+b);
    else if(op=="-") return(a-b);
    else if(op=="*") return(a*b);
    else if(op=="/") return(a/b);
}




int Solution::evalRPN(vector<string> &A)
{
    stack<int> s;
    for(int i=0;i<A.size();i++) //op iterate untill the it reaches to last element
    { if(A[i]=="+"||A[i]=="-"||A[i]=="*"||A[i]=="/")
        {
            int b=s.top();
            s.pop();
            int a=s.top();
            s.pop();
            int result=fun(a,b,A[i]);
            s.push(result);
        }
        else
        s.push(stoi(A[i]));
    }
    return s.top();
}
