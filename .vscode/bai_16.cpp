#include<iostream>
#include<math.h>
using namespace std;
double Tong_phanso(int &n,double &x)
{
    int i=1;
    double tich=1;
    int m=0;
    double s=0;
    while(i<=n)
    {
        tich=tich*x;
        m=m+i;
        s=s+(double)tich/m;
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
    cout<<Tong_phanso(n,x);
    return 0;
}