#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int s=0;
    int k=n;
    while(n!=0)
    {
        s=s*10+(n%10);
        n=n/10;
    }
    if(s==k)
        cout<<"yes";
    else    cout<<"no";
return 0;
}