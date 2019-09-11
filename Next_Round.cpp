#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ar;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        ar.push_back(input);
    }
    int score=ar[k-1];
    for (int i = 0; i < ar.size(); i++)
    {
        if(ar[i]>=score&&ar[i]>0)
        sum++;
    }
    //for(int i=0;i<ar.size();i++)
   // cout<<ar[i];
    cout<<sum<<endl;
    
    return 0;
}