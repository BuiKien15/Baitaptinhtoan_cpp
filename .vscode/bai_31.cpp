#include<iostream>
#include<math.h>
using namespace std;
bool KT_nguyento(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
return true;
}
int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    if(KT_nguyento(n))
        cout<<n<<" la so nguyen to";
    else
        cout<<n<<" ko la so nguyen to";
return 0;
}