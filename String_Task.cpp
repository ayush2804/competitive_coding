#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); ;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='y'||s[i]=='Y'||s[i]=='u'||s[i]=='U')
        s[i]='0';
        else if(s[i]>'a'&& s[i]<='z')
        s[i-1]='.';
    }
    cout<<s;
    return 0;
}