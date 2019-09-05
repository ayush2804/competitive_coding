#include<iostream>
using namespace std;
int main()
{
    int64_t n,t;
    //cin>>t;
    int64_t fibo(int,int64_t*);
   // while (t--)
   // {
        cin>>n;
        n-=1;
        int64_t* arr=new int64_t[n+1];
        arr[0]=0;
        arr[1]=1;
        int64_t c=fibo(n+1,arr);
        cout<<c<<endl;
   // }
    return 0;
}
int64_t fibo(int n,int64_t *arr)
{
    int64_t sum=0;
   for (int64_t i = 2; i < n; i++)
     {arr[i]=arr[i-1]+arr[i-2];
    sum+=arr[i];}
   return (sum+1)%10;
}