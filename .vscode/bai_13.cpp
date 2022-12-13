#include<iostream>
#include<math.h>
using namespace std;
long double Tong_bac_chan(long long &n,long double &x)
{
    long double s=0;
    long double tich=1;
    int i=1;
    while(i<=n)
    {
            {
                tich=tich*x*x;
                s=s+tich;
                i++;
            }
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
    cout<<Tong_bac_chan(n,x);
    return 0;
}