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
    x=-x;
    int i=1;
    double s=0;
    double t=1;
    while(i<=n)
    {
        t*=x;
        s+=t;
        i++;
    }
    cout<<-s;
return 0;
}
