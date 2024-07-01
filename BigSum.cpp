long aVeryBigSum(vector<long> ar) {
    
    int n= ar.size();
    long res=0;
    for(int i=0;i<n;i++)
    {
        res=res+ar[i];
    }
    return res;
}