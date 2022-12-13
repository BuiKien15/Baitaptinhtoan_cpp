#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int du=0;
    int dem=0;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
        if(du%2!=0)
            dem++;
    }
    cout<<dem;
    return 0;
}