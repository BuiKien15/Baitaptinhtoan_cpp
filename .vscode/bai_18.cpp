#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Nhap x:";
    cin>>x;
    int i=1;
    double s=0;
    double m=1;
    double tich=1;
    while(i<=n)
    {
        tich=tich*x*x;
        m=m*i*i;
        s=s+(double)tich/m;
        i++;
    }
    cout<<s;
    return 0;
}