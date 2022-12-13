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
    int bc=a*b;
    while(a!=b)
    {
        if(a>b) a=a-b;
        else    b=b-a;
    }
    bc/=a;
    cout<<"BCNN cua a va b la"<<bc;
return 0;
}