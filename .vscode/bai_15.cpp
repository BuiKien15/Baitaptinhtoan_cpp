#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double s=0;
    int tong=0;
    int i=1;
    cout<<"Nhap n:";
    cin>>n;
    while(i<=n)
    {
        tong=tong+i;
        s=s+(double)1/tong;
        i++;
    }
    cout<<s;
    return 0;
}