#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int max=n%10;
    int dem=0;
    int du;
    if(n==0)    dem=1;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
            if(du==max)
                dem++;
            if(du>max)
                max=du;
    }
    cout<<dem;
    return 0;
}