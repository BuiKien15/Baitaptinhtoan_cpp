#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            if(i%2==0)
            s+=i;
    cout<<s;
    return 0;
}