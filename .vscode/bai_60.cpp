#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    int k=n;
    bool check_tangdan=true;
    int chusocuoi=n%10;
    n/=10;
    while(n!=0)
    {
        int chusogancuoi=n%10;
        n/=10;
            if(chusocuoi<chusogancuoi)
                check_tangdan=false;
            else
                chusocuoi=chusogancuoi;
    }
    if(check_tangdan)
        cout<<k<<"tang dan tu trai sang phai";
    else
        cout<<"NO";
return 0;
}