#include<iostream>
using namespace std;

int fact(int a)
{
int multi=1;
for(int i=a;i>=1;i--)
{
multi=multi*i;
}
cout<<a<<"!="<<multi;
}
int main()
{
int x,count_p=0,count_np=0; cout<<"Enter any int number:"; cin>>x;
for(int i=2;i<=(x/2);i++)
{
if(x%i!=0)
{
count_p=count_p+1;
}
else
{
count_np=count_np+1;
}
}
if(count_np==0)
{
fact(x);
}

else
{
cout<<"This is not prime.";
}
}
