#include<iostream>
#include<math.h>
using namespace std;
double Tongluythua(int n)
{
    long long s=0;
    long long p=1;
    int i=1;
while(i<=n)
{
    p=p*i;
    s=s+p;
    i++;
}
return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<Tongluythua(n);
    return 0;
}
