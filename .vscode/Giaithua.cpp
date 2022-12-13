#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tich=1;
    for(int i=1;i<=n;i++)
    tich=tich*i;
    cout<<tich;
    return 0;
}