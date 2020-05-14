//Brute force

int Solution::isPower(int A)
{
    for(int i=2;i*i<=A;i++)
   {

       int ans=i;

       while(ans<=A)
       {
           if(ans==A)
           {
               return true;
           }
           ans=ans*i;
       }
   }
   return false;
}

//fast approach
int Solution::isPower(int A)
{

    if (A==1)
    {
        return true;
    }
    for(int i=2;i*i<=A;i++)
   {
       int l=log(A)/log(i);

       if(pow(i,l)==A)
       {
           return true;
       }
   }
   return false;
}
