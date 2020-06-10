int searchIn(vector<int> arr,int s,int e,int k)
{
    if(s>e)return -1;

    int mid=s + (e-s)/2;

    if(arr[mid]==k)return mid;

    if(arr[mid]>=arr[s])
    {
        if(k>=arr[s] && k<=arr[mid])return searchIn(arr,s,mid-1,k);

        return searchIn(arr,mid+1,e,k);
    }

    if(k>=arr[mid] && k<=arr[e])return searchIn(arr,mid+1,e,k);

    return searchIn(arr,s,mid-1,k);
}
int Solution::search(const vector<int> &A, int B)
{
    return searchIn(A,0,A.size()-1,B);
}
