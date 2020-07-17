string answer(int num , int pos)
{
    string a ,b,c;



    if(pos == 1)
    {
        a = "I";
        b = "V";
        c = "X";
    }
    else if(pos == 2)
    {
        a = "X";
        b = "L";
        c = "C";
    }
    else if(pos == 3)
    {
        a = "C";
        b = "D";
        c = "M";
    }
    else
    {
        a="M";
    }

    if(num==1)return a;
    if(num==2)return a+a;
    if(num==3)return a+a+a;
    if(num==4)return a+b;
    if(num==5)return b;
    if(num==6)return b+a;
    if(num==7)return b+a+a;
    if(num==8)return b+a+a+a;
    if(num==9)return a+c;

    return "";
}
string Solution::intToRoman(int A)
{
    string ans="";
    int pos=1;
    while(A)
    {
        int rem = A%10 ;
        ans = answer(rem , pos) + ans;
        A=A/10;
        pos++;

    }
    return ans;
}
