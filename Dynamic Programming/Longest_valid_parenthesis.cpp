int Solution::longestValidParentheses(string str)
{
    int left=0,right=0,ans=0;
   for(int i=0;i<str.length();i++)
   {
       if(str[i]=='(')
            left++;

       else
            right++;


        if(left==right)
        {
            ans=max(ans,2*left);
        }

        if(right>left)
        {
            left=0;
            right=0;
        }
   }

   left=0,right=0;

   for(int i=str.length()-1 ; i>=0;i--)
   {
       if(str[i]=='(')
       {
           left++;
       }
       else
       {
           right++;
       }

       if(left==right)ans=max(ans,2*left);

       if(left>right)
       {
           right=0;
           left=0;
       }

   }

   return ans;
}
