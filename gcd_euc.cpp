#include<iostream>
using namespace std;

long long gcd(long long a,long long b)
{
    if (b==0)
    return a;
    else
    {long long temp=a%b;
    a=b;
    b=temp;
    return gcd(a,b); }

}
int main()
{
    long long a,b,result;
    cin>>a>>b;
    if(a<b)
    {
      long long temp=a;
      a=b;
      b=temp;
    }

    result=gcd(a,b);
    cout<<result<<endl;
    return 0;
}