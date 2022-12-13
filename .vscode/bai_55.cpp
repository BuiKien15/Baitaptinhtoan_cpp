#include<iostream>
#include<math.h>
using namespace std;
int timchusodautien(int n)
{
    int first;
    do
    {
        first=n%10;
        n=n/10;
    } while (n!=0);
return first;    
}
int dem_so_chuso_dautien(int n)
{
    int i;
    int dem=0;
    if(n==0)    return 1;
    do
    {
        i=n%10;
        n=n/10;
            if(i==timchusodautien(n))
                dem++;
    } while (n!=0);
return dem;
}
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<dem_so_chuso_dautien(n);
    return 0;
}