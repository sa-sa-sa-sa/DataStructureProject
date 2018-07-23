#include<iostream>
#include<array>
using namespace std;

int main()
{
    int n;
    cin>>n;
    array<array<int,3>,3>arr;
    arr[0].fill(0);
    for(int j=0;j<3;j++)
    for(int i=0;i<3;i++)
        cout<<arr[j][i]<<" ";
}
