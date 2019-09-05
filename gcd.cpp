#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd(int,int);
    int c=gcd(a,b);
    cout<<c<<endl;
    return 0;
}
/* int gcd(int a,int b)
{
    vector<int>arr,arr2;
    for (int i = 2; i <= a/2; i++)
    {
        if(a%i==0)
        arr.push_back(i);
    }
    sort(arr.begin(),arr.end());
    for (int j = 0; i <= b/2; j++)
    {
        if(b%j==0)
        arr2.push_back(j);
    }
    sort(arr2.begin(),arr2.end());
    for(int k=)
} */
int gcd(int a,int b)
{
    int best,d;
    for(d=1;d<=a+b;d++)
    {
        if (a%d==0 && b%d==0)
        best=d;
    }
    return best;
}