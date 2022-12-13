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
int PT_bac_2(double a,double b,double c,double &x1,double &x2)
{
    int nSolution2; x1=x2=0;
    if(a==0)
        nSolution2=PT_bac_1(b,c,x1);
    else
    {
        double delta=b*b-4*a*c;
        double two_a=2*a;
        if(delta<0)
            nSolution2=vo_nghiem;
        else if(delta==0)
        {
            x1=x2=-b/two_a;
            nSolution2=1;
        }
        else
        {
            double sqrt_delta=sqrt(delta);
            x1=(-b-sqrt_delta)/two_a;
            x2=(-b+sqrt_delta)/two_a;
            nSolution2=2;
        }
    }
return nSolution2;
}
int main()
{
    double a,b,c,x1,x2;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    cout<<"Nhap c:";
    cin>>c;
    double delta=b*b-4*a*c;
    double two_a=2*a;
    int so_nghiem=PT_bac_2(a,b,c,x1,x2);
    cout<<"So nghiem cua phuong trinh la: "<<so_nghiem<<endl;
    if(a==0)
    {
        if(b!=0)
            cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "   "la: " << x1 << endl;
        else
           if(c == 0)
           cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "    "la: vo so nghiem "  << endl;
           else
           cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "    "la: vo nghiem "  << endl;
    }
    else
    {
        if(delta < 0)
            cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "la: vo nghiem " << endl;
        else if(delta == 0)
            cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "co 1 nghiem kep la: x1 = x2 = " << x1 << endl;
        else
            cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "co 2 nghiem phan biet: " << x1 << " va " << x2 << endl;
    }
    return 0;
}