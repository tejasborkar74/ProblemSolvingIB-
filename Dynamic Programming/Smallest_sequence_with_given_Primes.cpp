vector<int> Solution::solve(int A, int B, int C, int D)
{
    vector<int> ans;

   if(D==0)return ans;

  // priority_queue <int,vector<int> ,greater<int> > q;
   set<int> s;

   s.insert(A);
   s.insert(B);
   s.insert(C);
//   q.push(A);
//   q.push(B);
//   q.push(C);


   while(!s.empty())
   {
       int mn = *s.begin();
       s.erase(s.begin());

       ans.push_back(mn);

       if(ans.size()==D)break;

       s.insert(mn*A);
       s.insert(mn*B);
       s.insert(mn*C);

   }

   return ans;
}
