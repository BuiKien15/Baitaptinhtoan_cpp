#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int du;
    int min=n%10;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
            if(du<min)
                min=du;
    }
    cout<<min;
    return 0;
}