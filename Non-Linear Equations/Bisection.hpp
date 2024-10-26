#include <bits/stdc++.h>
using namespace std;

double determinePolynomial(const vector<double>& coeffs , double x)
{
    double value = 0.0;
    int degree = coeffs.size() - 1;
    for(int i = 0 ; i <= degree ; i++)
    {
        value += coeffs[i] * pow(x,degree-i);
    }
    return value;
}

void bisection()
{
    int degree;
    cout << "enter degree of the polynomial : ";
    cin >> degree;

    vector<double> coeffs(degree+1);
    cout << "enter coefficients  (from highest degree to lowest degree :)";
    for(int i = 0 ; i <= degree ; i++)
    {
        cin >> coeffs[i];
    }

    float a,b,x,fa,fb,fx,error;

    while(true)
    {
        cout << "enter 1st guess : ";
        cin >> a;
        cout << "enter 2nd guess : ";
        cin >> b;
        cout << "enter tolerable error : ";
        cin >> error;

        fa = determinePolynomial(coeffs , a);
        fb = determinePolynomial(coeffs , b);

        if(fa * fb > 0.0)
            cout << "incorrect initial guesses" << endl;
        else
            break;
    }

    do
    {
        x = (a + b) / 2;
        fx = determinePolynomial(coeffs , x);

        if(fa * fx < 0)
            b = x;
        else
            a = x;

    }while(fabs(fx) > error);

    cout << "one root is : " << x << endl;

}