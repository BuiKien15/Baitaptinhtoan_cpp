#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++)
    s=s+(double)1/(i*(i+1));
    cout<<s;
    return 0;
}