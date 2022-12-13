#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int s=0;
    int du;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
            s=s*10+du;
    }
    cout<<s;
return 0;
}