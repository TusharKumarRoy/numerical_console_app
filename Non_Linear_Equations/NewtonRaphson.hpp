#include <bits/stdc++.h>
#define terminatingItr 30

using namespace std;

double tolerance_newton = 0.0001;

double fx_newton(double x, vector<double> v)
{
    double total = 0, temp = 1;
    for (auto it : v)
    {
        total = total + (temp * it);
        temp = temp * x;
    }
    return total;
}

double derivedfx_newton(double x, vector<double> v)
{
    double total = 0, temp = 1;
    for (int i = 1; i < v.size(); ++i)
    {
        total = total + (temp * v[i] * i);
        temp = temp * x;
    }
    return total;
}

void newtonRaphson(vector<double> v, double x0) {
    int iterations = 1;
    double solution;
    while (iterations <= terminatingItr) {
        double fx0 = fx_newton(x0, v);
        double fpx0 = derivedfx_newton(x0, v);
        double x1 = x0 - (fx0 / fpx0);
        double fx1 = fx_newton(x1, v);
        solution=x1;
        if (fabs(fx1) <= tolerance_newton) {
            cout<<"Solution of the Equation is: "<<solution<<endl;
            return;
        }
        x0 = x1;
        iterations++;
    }
    
    cout << "\nCould not converge to solution in " << terminatingItr << " iterations" << endl ;
}

void callNewtonRaphson(){
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;
    vector<double> coefficientMatrix(n + 1);
    cout << "Enter the coefficients from highest to lowest degree:"<<endl;
    for (int i = n; i >= 0; --i) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coefficientMatrix[i];
    }
    double initialGuess;
    cout << "Enter initial guess for Newton-Raphson method: ";
    cin >> initialGuess;
    newtonRaphson(coefficientMatrix, initialGuess);
    return;
}

