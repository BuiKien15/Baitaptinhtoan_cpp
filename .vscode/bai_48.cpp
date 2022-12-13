#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n";
    cin>>n;
    int tich=1;
    int du;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
        if(du%2!=0)
            tich*=du;
    }
    cout<<tich;
    return 0;
}