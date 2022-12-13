#include<iostream>
#include<math.h>
using namespace std;
double Power_n(double x,long n)
{
    double result=1;
    while(n--)
    {
        result=result*x;
    }
return result;
}
double qPower_n(double x, long n)
{
    // n >= 0
    double result = 1;
    while(n)
    {
        if(n % 2 == 1)
        {
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    return result;
}
int main()
{
    double x;
    long n;
    cout<<"Nhap x:";
    cin>>x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<Power_n(x,n);
    return 0;
}