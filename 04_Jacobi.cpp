#include<iostream>
using namespace std;
double eq1(double x1,double x2,double x3,double x4)
{
    return (6 + x2 - 2*x3)/10;
}
double eq2(double x1,double x2,double x3,double x4)
{
    return (25 + x1 + x3 - 3*x4)/11;
}
double eq3(double x1,double x2,double x3,double x4)
{
    return (-11 -2*x1 + x2 + x4)/10;
}
double eq4(double x1,double x2,double x3,double x4)
{
    return (15 - 3*x2 + x3)/8;
}

int main(){
    double x1=0,x2=0,x3=0,x4=0;
    double temp1=0,temp2=0,temp3=0,temp4=0;
    for(int i=0;i<5;i++)
    {
        temp1 = eq1(x1,x2,x3,x4);
        temp2 = eq2(x1,x2,x3,x4);
        temp3 = eq3(x1,x2,x3,x4);
        temp4 = eq4(x1,x2,x3,x4);
        x1 = temp1;
        x2 = temp2;
        x3 = temp3;
        x4 = temp4;
        cout << "Iteration " << i+1 << " :" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << "x3 = " << x3 << endl;
        cout << "x4 = " << x4 << endl << endl;
    }
return 0;
}
