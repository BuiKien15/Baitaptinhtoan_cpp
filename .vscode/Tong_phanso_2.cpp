#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    s=s+(double)1/(2*i);
    cout<<s;
    return 0;
}