#include<iostream>
using namespace std;
double eq(double x)
{
    return (x*x*x) - x - 11;
}
int main(){
    double left = 1, right = 3;
    for(int i=0;i<10;i++)
    {
        double mid = left-(((right-left)*eq(left))/(eq(right)-eq(left)));
        if(eq(mid) < 0)
            left = mid;
        else
            right = mid;
        cout << "Iteration " << i+1 << " : " << mid << endl;
    }
return 0;
}

