int hourglassSum(vector<vector<int>> arr) {
    
    vector<int> hourglassSum;
    int n=6;
    int hrs;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            hrs=arr[i][j]+arr[i][j+1]+arr[i][j+2]
                         +arr[i+1][j+1]
               +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            
            hourglassSum.push_back(hrs);
        }
    }
    
    
    int maxhrs=hourglassSum[0];
    for(int i=1;i<hourglassSum.size();i++)
    {
        if(hourglassSum[i]>maxhrs)
        {
            maxhrs=hourglassSum[i];
        }
    }
    return maxhrs;

}