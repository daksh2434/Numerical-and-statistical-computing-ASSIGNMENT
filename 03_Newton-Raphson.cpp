#include<iostream>
using namespace std;

double eq(double x)
{
    return (x*x*x) - x - 11;
}

double deri(double x)
{
    return (3*x*x) - 1;
}

int main(){
    double n = 2;
    for(int i=0;i<10;i++)
    {
        n = n - (eq(n)/deri(n));
        cout << "Iteration " << i+1 << " : " << n << endl;
    }
return 0;
}


