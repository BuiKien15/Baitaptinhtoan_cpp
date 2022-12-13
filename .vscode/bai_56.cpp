#include<iostream>
#include<math.h>
using namespace std;
bool Kiemtra_sole(int n)
{
    while(n/=10)
        {
            if((n%10)%2==0)
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
    cout<<"Nhap n:";
    cin>>n;
    if(Kiemtra_sole(n))
    cout<<n<<" toan chu so le";
    else
    cout<<n<<" ko hoan toan chu so le";
    return 0;
}