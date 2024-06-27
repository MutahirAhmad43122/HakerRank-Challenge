vector<int> rotateLeft(int d, vector<int> arr) {
     int n = arr.size();
    vector<int> rotatedArray(n);
    
    for(int i=0;i<n;i++) 
    {
        rotatedArray[i] = arr[(i+d)%n];
    }
    
    return rotatedArray;

}