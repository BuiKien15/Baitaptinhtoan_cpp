#include<iostream>
#include<math.h>
using namespace std;
bool Kiemtra_toan_sochan(int n)
{
    while(n/=10)
    {
        if((n%10)%2!=0)
        {
            return false;
            break;
        }
    }
return true;
}
int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    if(Kiemtra_toan_sochan(n))
    cout<<n<<" toan la so chan";
    else
    cout<<n<<" ko hoan toan la so chan";
return 0;
}