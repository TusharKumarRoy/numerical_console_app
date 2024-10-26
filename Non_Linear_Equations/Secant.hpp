#include <bits/stdc++.h>
#define terminatingItr 150

using namespace std;

double tolerance_secant = 0.0001;

double fx_secant(double x, vector<double> v)
{
    double total = 0, temp = 1;
    for (auto it : v)
    {
        total = total + (temp * it);
        temp = temp * x;
    }
    return total;
}

double derivedfx_secant(double x, vector<double> v)
{
    double total = 0, temp = 1;
    for (int i = 1; i < v.size(); ++i)
    {
        total = total + (temp * v[i] * i);
        temp = temp * x;
    }
    return total;
}

void secant(vector<double> v, double x1, double x2)
{
    int iterations = 1;
    double solution;
    while (iterations <= 12)
    {
        double fx1 = fx_secant(x1, v);
        double fx2 = fx_secant(x2, v);
        double x3 = x2 - ((fx2 * (x2 - x1)) / (fx2 - fx1));
        double fx3 = fx_secant(x3, v);
        solution = x3;
        if (fabs(fx3) <= tolerance_secant)
        {
            cout << "Solution of the equation is: " << solution << endl;
            return;
        }
        x1 = x2;
        x2 = x3;
        iterations++;
    }
    
    cout << "\nCould not converge to solution in " << terminatingItr << " iterations" << endl ;
}

void callSecant()
{
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;
    vector<double> coefficientMatrix(n + 1);
    cout << "Enter the coefficients from highest to lowest degree:" << endl;
    ;
    for (int i = n; i >= 0; --i)
    {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coefficientMatrix[i];
    }
    double initialGuess1, initialGuess2;
    cout << "Enter two initial guesses for Secant method: ";
    cin >> initialGuess1 >> initialGuess2;
    secant(coefficientMatrix, initialGuess1, initialGuess2);
    return;
}