#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a1,a2,a3,c1,c2,c3;
    int c=0;
    cin>>a1>>a2>>a3>>c1>>c2>>c3;
    if((a1>=a2&&a1>=a3)&&(c1>=c2&&c1>=c3))
     if((a2>=a3&&c2>=c3)||(a3>=a2&&c3>=c2))
      {c=1;
          cout<<"FAIR";}
    if((a2>=a1&&a2>=a3)&&(c2>=c1&&c2>=c3))
     if((a1>=a3&&c1>=c3)||(a3>a1&&c3>=c1))
      {c=1;
          cout<<"FAIR";}
    if((a3>=a1&&a3>=a2)&&(c3>=c1&&c3>=c2))
     if((a1>=a2&&c1>=c2)||(a2>=a1&&c2>=c1))
     {c=1;
          cout<<"FAIR";}
    if(c==0)
    cout<<"NOT FAIR";
    return 0;
}