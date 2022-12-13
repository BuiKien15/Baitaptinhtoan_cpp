#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    double s=0;
    int i=3;
    s=(double)sqrt(1);
    while(i<=n)
    {
        s=pow(s+i,(double)1/(i+1));
        i++;
    }
    cout<<s;
    return 0;
}