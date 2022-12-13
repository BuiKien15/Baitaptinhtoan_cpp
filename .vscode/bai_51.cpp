#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int max=0;
    int du;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
            if(du>max)
                max=du;
    }
    cout<<max;
    return 0;
}