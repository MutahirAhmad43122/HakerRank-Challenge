vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    vector<int> temp(n);
    
    for(int i=0;i<n;i++)
    {
        temp[i]=a[n-i-1];
    }
    return temp;

}