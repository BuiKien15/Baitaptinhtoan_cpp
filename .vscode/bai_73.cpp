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
    double s=1;
    double tich=1;
    double t,m;
    while(i<=n)
    {
        t=pow(x,(2*i));
        m=2*i;
        tich=tich*m*(m-1);
        s=s+pow(-1,(double)i)*(double)(t/tich);
        i++;
    }
    cout<<s-x;
    return 0;
}