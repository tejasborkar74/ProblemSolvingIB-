class graph
{
  map<int,vector<int> > adjList;

  int answer = 0 ;

  public:

  void addedge(int u,int v)
  {
      adjList[u].push_back(v);
      //adList[v].push_back(u);
  }

  int getanswer()
  {
      return answer;
  }

  void setheights(int &h1 ,int &h2,int &ht)
  {
      int a = h1 ,b= h2,c=ht;
      if(h1 <= h2 && h1 <= ht)
      {
          h1 = b;
          h2 = c;
          return;
      }
      if(h2 <= h1 && h2 <= ht)
      {
           h1 = a;
          h2 = c;
          return;
      }
      if(ht <= h1 && ht <= h2 )
      {
          return ;
      }
  }

  int longestDist(int root)
  {
      int h1 =INT_MIN , h2=INT_MIN , count=0 , ans=0;

      for(auto neigh : adjList[root])
      {
          count++;

          int ht = longestDist(neigh);

         if(count==1)
         {
             h1 = ht;
         }
         else if(count == 2)
         {
             h2 = ht;
         }
         else
         {
             setheights(h1,h2,ht);
         }
      }

      if(count == 0)return 0;

      int temp =  max(h1,h2)+1 ;

      if(count == 1)
      {
          answer = max(answer,h1 +1 );
      }
      else
      {
          answer  = max( h1 + h2 +2 ,answer) ;
      }

      return temp;
  }
};
int Solution::solve(vector<int> &arr)
{
    graph g;

    int root;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==-1)
        {
            root = i;
        }
        else
            g.addedge(arr[i] , i);
    }

    g.longestDist(root);

    return g.getanswer();

}
