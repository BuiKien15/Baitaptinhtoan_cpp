#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int du;
    do
    {
        du=n%10;
        n=n/10;
    } while (n!=0);
    cout<<du;
return 0;
}