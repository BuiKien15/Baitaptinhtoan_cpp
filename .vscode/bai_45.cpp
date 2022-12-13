#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int t=1;
    int du;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
        t*=du;
    }
    cout<<t;
    return 0;
}