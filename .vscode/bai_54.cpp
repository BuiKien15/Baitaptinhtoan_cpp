#include<iostream>
#include<math.h>
using namespace std;
int dem_sochuso_nhonhat(int &n)
{
    int min=n%10;
    int du;
    int dem=0;
    if(n==0)    return 1;
    while(n!=0)
    {
        du=n%10;
        n=n/10;
            if(du==min)
                dem++;
            if(du<min)
                min=du;
    }
return dem;
}
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<dem_sochuso_nhonhat(n);
    return 0;   
}