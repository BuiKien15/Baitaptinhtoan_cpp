#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int i=0;
    double s=1;
    while(i<=n)
    {
        s=1+(double)1/s;
        i++;
    }
    cout<<s;
    return 0;
}