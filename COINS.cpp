#include<iostream>
using namespace std;
int main()
{
    int t=0;
    long long int n;
    while (cin>>n)
      {
       long long int a,b,c,d;
       a=n/4;
       b=n/3;
       c=n/2;
       d=a+b+c;
       if(d<n)
       {
           d=n;          
           cout<<d<<endl;
       } 
       else
       {cout<<d<<endl;}
      }
   
    return 0; 
}