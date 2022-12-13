#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int du=0;
    int s=0;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
        s+=du;
    }
    cout<<s;
    return 0;
}