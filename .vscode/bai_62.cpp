#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"UCLN cua a va b la :"<<a;
return 0;
}