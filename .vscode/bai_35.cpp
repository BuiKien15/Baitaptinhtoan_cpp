#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double s=0;
    cout<<"Nhap n:";
    cin>>n;
    int i=n;
    while(i>=1)
    {
        s=sqrt(s+i);
        i--;
    }
    cout<<s;
    return 0;
}