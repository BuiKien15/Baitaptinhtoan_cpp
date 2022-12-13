#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n;
    double s;
    cout<<"Nhap n:";
    cin>>n;
    do
    {
        if(n<1)
        cout<<"Moi ban nhap n >=1:";
        cin>>n;
    } while (n<1);
    
    s=sqrt((double)2);
    for(int i=2;i<=n;i++)
        s=sqrt(s+2);
        cout<<s;
return 0;
}