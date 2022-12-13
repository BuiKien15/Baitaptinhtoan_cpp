#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int k=n;
    bool check_giamdan=true;
    int chusocuoi=n%10;
    n/=10;
    while(n!=0)
    {
        int chusogancuoi=n%10;
        n/=10;
        if(chusocuoi>chusogancuoi)
            check_giamdan=false;
        else
            chusocuoi=chusogancuoi;
    }
    if(check_giamdan)
        cout<<k<<" giam dan tu trai sang phai";
    else
        cout<<"no";
return 0;
}