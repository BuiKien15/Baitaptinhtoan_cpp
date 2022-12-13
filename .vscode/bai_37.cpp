#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    double s=0;
    s=(double)sqrt(2);
    int i=3;
    while(i<=n)
    {
        s=pow(s+i,(double)1/i);
        i++;
    }
    cout<<s;
    return 0;
}