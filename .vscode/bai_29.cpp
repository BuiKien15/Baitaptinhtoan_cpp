#include<iostream>
using namespace std;
bool uocsole(int n)
{
    if(n%2!=0)
    return true;
return false;
}
int main()
{
    int n;
    int max=0;
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<=n;i++)
        if(uocsole(i) &&(n%i==0))
            if(i>max)
                max=i;
    cout<<max;   
    return 0;     
}