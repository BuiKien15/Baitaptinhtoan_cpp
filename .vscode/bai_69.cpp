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
    int i=0;
    double s=0;
    double t=1;
    while(i<=n)
    {
        t=pow(x,(2*i+1))*pow(-1,i);
        s+=t;
        i++;
    }
    cout<<s;
return 0;
}