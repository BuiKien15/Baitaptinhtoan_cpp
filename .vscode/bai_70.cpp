#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int i=1;
    double s=0;
    double p=0;
    while(i<=n)
    {
        p+=i;
        s=s+pow(-1,(1+i))/p;
        i++;
    }
    cout<<s;
    return 0;
}