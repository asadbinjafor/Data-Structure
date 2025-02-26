#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
     a=5;
     b=2;
     c=b++;
     d=++b;
     ++b;


     cout<<"1:"<<c<<endl;
     cout<<"2:"<<d<<endl;
     cout<<"3:"<<b<<endl;
     cout<<"4:"<<a++<<endl;
     cout<<"5:"<<++a<<endl;
     cout<<"6:"<<b++<<endl;
     cout<<"7:"<<++c<<endl;
     cout<<"8:"<<c++<<endl;
     cout<<"9:"<<++d<<endl;
     cout<<"10:"<<d++<<endl;
     cout<<"11:"<<++b<<endl;
     cout<<"12:"<<c<<endl;
     cout<<"13:"<<d<<endl;
}

