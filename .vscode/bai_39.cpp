#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int i=1;
    double s=0;
    double t=1;
    while (i<=n)
    {
        t=t*i;
        s=pow((s+t),(double)1/(i+1));
        i++;
    }
    cout<<s;
return 0;
}