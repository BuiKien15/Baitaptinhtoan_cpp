#include<iostream>
#include<math.h>
using namespace std;
long double Tongluythua(long long &n,long double &x)
{
    int i=1;
    long double tich=1;
    long double s=0;
    while(i<=n)
    {
        tich=tich*x;
        s=s+tich;
        i++;
    }
    return s;
}
int main()
{
    long long n;
    long double x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Nhap x:";
    cin>>x;
    cout<<Tongluythua(n,x);
    return 0;
}