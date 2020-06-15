string keypad[]={ "0", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

vector<string> ans;

void answer(string str,int i,string temp)
{
    if(i==str.length())
    {
        ans.push_back(temp);
        return;
    }

    int digit = str[i]-'0';

    if(digit<=1)
    {
        temp=temp+str[i];
        answer(str,i+1,temp);
    }
    else
    {
        for(int j=0;j<keypad[digit].length();j++)
        {
            temp=temp+keypad[digit][j];
            answer(str,i+1,temp);

            temp.erase(temp.length()-1);
        }
    }
}
vector<string> Solution::letterCombinations(string A)
{
    ans.clear();

    answer(A,0,"");

    return ans;

}
