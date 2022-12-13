#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    int dem=0;
    cout<<"Nhap n:";
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        dem++;
    }
    cout<<dem;
return 0;
}