#include<iostream>
#include<vector>
using namespace std;
    int fact(int x)
    {
        int ans = 1;
        for(int i=1;i<=x;i++)
        {
            ans *= i;
        }
        return ans;
    }
    //for p(p+1)(p+2)...
    double fn(double p, int x)
    {
        double answer = 1;
        for(int i=0;i<x;i++)
        {
            answer *= (p + i);
        }
        return answer;
    }

int main(){
    vector<double> x = {0,1,2,3};
    vector<double> y = {1,2,1,0};
    //This is the value of x at which we need to find value of y;
    double val = 2.5;
    int n = y.size();
    double p = (val - x[n-1]) / (x[1] - x[0]);
    double ans = y[n-1];
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            y[j] = y[j] - y[j-1];
        }
        ans += (fn(p,i+1)*y[n-1])/fact(i+1);
    }
    cout << "Value of y at x = " << val << " is : " << ans;
return 0;
}
