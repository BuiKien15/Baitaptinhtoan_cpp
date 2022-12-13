#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    double x;
    cout<<"Nhap x:";
    cin>>x;
    int i=1;
    while(i<=n)
    {
        t=pow(x,(2*i+1));
        m=2*i+1;
        tich*=m*(m-1);
        s=s+pow(-1,(i+1))*t/tich;
    }
}