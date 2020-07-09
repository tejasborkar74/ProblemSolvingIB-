class graph
{
  map<int,vector<int> > adjList;

  public:

  void addEdge(int a,int b)
  {
     adjList[a].push_back(b);
  }

  bool helper(int node , map<int,bool > &visited , map<int,bool > &instack)
  {
      visited[node]=true;
      instack[node]=true;

      for(auto neigh : adjList[node])
      {
          if(instack[neigh]==true || (!visited[neigh] && helper(neigh,visited,instack)))
          return true;
      }

      instack[node]=false;

      return false;
  }
  bool iscyclic()
  {
      map<int ,bool> visited;
      map<int ,bool> instack;
      for(auto i :adjList)
      {
          int node = i.first;

          if(!visited[node])
          {
              bool cyclepresent = helper(node,visited,instack);

              if(cyclepresent)return true;
          }
      }

      return false;
  }
};
int Solution::solve(int A, vector<vector<int> > &arr)
{
    graph g;

     for(int i=0;i<arr.size();i++)
      {
          g.addEdge(arr[i][0],arr[i][1]);
      }

      return g.iscyclic();
}
