#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
bool KT_chinhphuong(int n)
{
    if(sqrt((double)n)==(int)sqrt((double)n))
    return true;
return false;
}
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    if(KT_chinhphuong(n))
        cout<<n<<" la so chinh phuong";
    else
        cout<<n<<" ko la so chinh phuong";
return 0;
}