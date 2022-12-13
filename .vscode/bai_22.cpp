#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int tich=1;
    cout<<"nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            tich*=i;
    cout<<tich;
    return 0;
}