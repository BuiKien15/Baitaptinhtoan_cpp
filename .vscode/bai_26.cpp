#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int tich=1;
    cout<<"Nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            if(i%2!=0)
                tich*=i;
    cout<<tich;
    return 0;
}