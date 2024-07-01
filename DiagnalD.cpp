
int diagonalDifference(vector<vector<int>> arr) {
        int rds=0;
    int lds=0;
    
    int n =arr[0].size();;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                rds=rds+arr[i][j];
            }
            
            if(i+j==n-1)
            {
                lds=lds+arr[i][j];
            }   
        }
    }
    cout<<rds<<','<<lds;
    int res=abs(rds-lds);
    return res;
}