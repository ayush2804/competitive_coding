#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        int reva=0,revb=0,revres=0;
        cin>>a>>b;
        while(a>0)
        {
            int temp=a%10;
            reva=reva*10+temp;
            a/=10;
        }
        while(b>0)
        {
            int temp2=b%10;
            revb=revb*10+temp2;
            b/=10;
        }
        int res=reva+revb;
        while(res>0)
        {
            int temp3=res%10;
            revres=revres*10+temp3;
            res/=10;
        }
        while(revres%10==0)
        revres/=10;
        cout<<revres<<endl;
    }
   return 0; 
}