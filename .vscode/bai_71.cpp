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
    double s=0;
    double t=1;
    double m=0;
    while(i<=n)
    {
        t=t*x;
        m=m+i;
        s=s+pow(-1,i)*t/m;
        i++;
    }
    cout<<s;
return 0;
}