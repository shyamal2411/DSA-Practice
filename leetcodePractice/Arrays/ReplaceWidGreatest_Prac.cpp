vector<int> replaceElements(vector<int>& A,int mx=-1)
{
    for(int i=A.size()-1;i>=0;i--)
    {
        int mx=max(mx,exchange(A[i],mx));
    }
    return A;
}