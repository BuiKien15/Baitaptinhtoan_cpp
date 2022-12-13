#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Nhap x: ";
    cin>>x;
    int i=1;
    double s=0;
    double tich=1;
    double m=1;
    while(i<=n)
    {
        tich=tich*x;
        m=m*i;
        s=s+(double)tich/m;
        i++;
    }
    cout<<s;
    return 0;
}