#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>arr;
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            arr.push_back(input);
        }
        sort(arr.begin(),arr.end());

       /* for (int i = 0;i<n; i++)
        {
            cout<<arr[i];
            for(int j=0;j<n;j++)
            {
                
                int res=arr[i]-arr[j];
                result.push_back(res);
            }
        }*/
        cout<<endl;
       //sort(result.begin(),result.end());
        for (int i = 0; i <n; i++)
        {
            for(int j=i+1;j<n;j++)
           { 
            if(arr[i]+1==arr[j])
            {arr.erase(arr.begin()+j);
             break;}
           }
        }       
        for (int i = 0; i <arr.size(); i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                int res=arr[i]-arr[j];
                if(res>1)
                result.push_back(res);
            }
        }
        sort(result.begin(),result.end());
        cout<<result[0];
    }
 return 0;
}