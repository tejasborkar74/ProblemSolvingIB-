bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k)
{
    int n=arrive.size();

    vector< pair<int,int> > vec;

     for(int i=0;i<n;i++)
    {
        vec.push_back({arrive[i],depart[i]});
    }

    sort(vec.begin(),vec.end());

    int active=1;

    priority_queue <int, vector<int>, greater<int> > q;
    q.push(vec[0].second);

    for(int i=1;i<n;i++)
    {

            active++;

            q.push(vec[i].second);
         while( q.top()<=vec[i].first && !q.empty())
        {
            active--;
            q.pop();
        }
        if(active>k)
        {
            return 0;
        }
    }

    return 1;
}
