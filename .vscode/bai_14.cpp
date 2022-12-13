#include<iostream>
#include<math.h>
using namespace std;
long double Tong_bac_le(int &n,double &x)
{
    long double s=0;
    long double tich=1;
    int i=1;
    while(i<=n)
    {
        tich=pow(x,2*i+1);
        s=s+tich;
        i++;
    }
return s;
}
int main()
{
    int n;
    double x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Nhap x:";
    cin>>x;
    cout<<Tong_bac_le(n,x);
    return 0;
}