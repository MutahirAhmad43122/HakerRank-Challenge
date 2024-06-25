#include<iostream>
using namespace std;

int simpleArraySum(vector<int> ar) {
int Sum=0;
    for(int i=0;i<ar.size();i++)
    {
        Sum = Sum + ar[i];
    }
    
    return Sum;
}



