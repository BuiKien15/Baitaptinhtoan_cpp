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
    double t=1;
    double s=0;
    double m=1;
    int i=1;
    while(i<=n)
    {
        t*=x;
        m*=i;
        s+=pow(-1,i)*t/m;
        i++;
    }
    cout<<s;
return 0;
}