#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double s=0;
    cout<<"Nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
        s=sqrt((double)i+s);
    cout<<s;
return 0;
}