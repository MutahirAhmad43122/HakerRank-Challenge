#include<iostream>
using namespace std;

int ArraySum(int n,int arr[])
{
    int Sum=0;
    for(int i=0;i<n;i++)
    {
        Sum = Sum + arr[i];
    }
    
    return Sum;
}