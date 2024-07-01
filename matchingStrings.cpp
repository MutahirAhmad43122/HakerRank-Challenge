vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    
     vector<int> result;

    for (int i=0;i<queries.size();i++) 
    {
        int count = 0;
        for (int j=0;j<stringList.size();j++) 
        {
            if (stringList[j]==queries[i]) 
            {
                count++;
            }
        }
        result.push_back(count);
        
    }
    return result;

}