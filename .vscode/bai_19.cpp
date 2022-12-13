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
    double s=0;
    double tich=1;
    int m;
    int i=1;
    while(i<=n)
    {
        tich=pow(x,2*i+1);
        m=2*i+1;
        n*=m*(m-1);
        s=s+x+(double)tich/n;
        i++;
    }
    cout<<s;
    return 0;
}