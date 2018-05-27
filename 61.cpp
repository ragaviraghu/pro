#include <iostream>
using namespace std;
int main() 
{
string s1,s2;
int n,m,i,e;
cin>>s1>>s2;
n=s1.length();
m=s2.length();
if(n==m)
{
for(i=0;i<n;i++)
{
e=s1[i]+s2[i];
e-=96;
if(e<123)
{
char s=e;
cout<<s;
}
else
{
char s=e-26;
cout<<s;
}
}
}
else
{
cout<<"strings of unequal length"<<endl;
}
return 0;
}
