#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cout<<"Nhap n:";
        cin>>n;
    } while (n<0 && cout<<"Error,please take the number bigger than 0"<<endl);
    double s=0;
    int i=0;
    while(s+i<n)
    {
        i++;
        s=s+i;
    }
    cout<<s;
    return 0;
}