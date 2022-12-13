#include<iostream>
using namespace std;
int main()
{
    int n;
    int dem=0;
    cout<<"nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            if(i%2==0)
                dem++;
    cout<<dem;
    return 0;
}