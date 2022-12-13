#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++)
    s=s+(double)(2*i+1)/(2*i+2);
    cout<<s;
    return 0;
}