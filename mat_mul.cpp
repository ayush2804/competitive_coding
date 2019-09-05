#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matA[n][n],matB[n][n],matC[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>matA[i][j];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>matB[i][j];
    int s;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
    {
        s=0;
        s+=matA[i][j]*matB[j][i];   
        for(int k=0;k<i;k++)
        matC[i][k]=s;
    }
       
    }
   
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cout<<matC[i][j];
    return 0;
} 