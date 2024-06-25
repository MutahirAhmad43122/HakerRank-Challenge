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



int main ()
{
    int n=4;
    int arr[]={1,4,5,6};
    
    int sum=ArraySum(n, arr);
    cout<<sum;
}