#include<iostream>
#include<math.h>
using namespace std;
const int vo_nghiem=0,vo_so_nghiem=-1;
int PT_bac_1(double a,double b,double &x)
{
    int nSolution1;
    if(a!=0)
    {
        x=-b/a;
        nSolution1=1;
    }
    else
    {
        x=0;
        if(b==0)
            nSolution1=vo_so_nghiem;
        else
            nSolution1=vo_nghiem;
    }
return nSolution1;
}
int main()
{
    double a,b,x;
    cout<<"Nhap a = ";
    cin>>a;
    cout<<"Nhap b = ";
    cin>>b;
    int nSolution=PT_bac_1(a,b,x);
    cout<<"So nghiem cua phuong trinh la: "<<nSolution<<endl;
    if(a!=0)
        cout<<"Nghiem cua phuong trinh "<<a<<"x + "<<b<<" =0 "<<"la: "<<x<<endl;
    else
        if(b==0)
            cout<<"Nghiem cua phuong trinh "<<a<<"x + "<<b<<" =0 "<<"la: vo so nghiem "<<endl;
        else
            cout<<"Nghiem cua phuong trinh "<<a<<"x + "<<b<<" =0 "<<"la: vo nghiem"<<endl;    
return 0;
}