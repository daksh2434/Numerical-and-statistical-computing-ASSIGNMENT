#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of variables: ";
    cin >> n;

    vector<vector<double>> a(n, vector<double>(n+1));

    cout << "Enter augmented matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Forward Elimination
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            double factor = a[j][i] / a[i][i];
            for(int k = i; k <= n; k++) {
                a[j][k] -= factor * a[i][k];
            }
        }
    }

    // Back Substitution
    vector<double> x(n);

    for(int i = n-1; i >= 0; i--) {
        x[i] = a[i][n];
        for(int j = i+1; j < n; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    cout << "\nSolution:\n";
    for(int i = 0; i < n; i++) {
        cout << "x" << i+1 << " = " << x[i] << endl;
    }

    return 0;
}
