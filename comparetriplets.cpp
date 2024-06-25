vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    int AScore=0;
    int BScore=0;
    
    for(int i=0;i<3;i++)
    {
        if(a[i]<b[i])
        {
            BScore=BScore+1;
        }
        
        else if(a[i]>b[i])
        {
            AScore=AScore+1;
        }
        
    }
    
    vector<int> res={AScore,BScore};
    return res;
}