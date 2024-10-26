#include <bits/stdc++.h>
using namespace std;

// method to determine the value of the polynomial for a value of varible x
double determinePolynomial_Falsi(const vector<double> &coeffs, double x)
{
    double value = 0.0;
    int degree = coeffs.size() - 1;
    for (int i = 0; i <= degree; i++)
    {
        value += coeffs[i] * pow(x, degree - i);
    }
    return value;
}

// method of false position
void falsePosition()
{
    int degree;
    cout << "enter degree of the polynomial : ";
    cin >> degree;

    vector<double> coeffs(degree + 1);
    cout << "enter coefficients  (from highest degree to lowest degree :)";
    for (int i = 0; i <= degree; i++)
    {
        cin >> coeffs[i];
    }

    float leftGuess, rightGuess, x, fLeft, fRight, fx, tolerable_error;
    int itr = 0;   // keeping track of total steps for finding solution
    while (true)
    {
        // input from user
        cout << "enter 1st guess : ";
        cin >> leftGuess;
        cout << "enter 2nd guess : ";
        cin >> rightGuess;
        cout << "enter tolerable error : ";
        cin >> tolerable_error;

        // determine polnomial value of those guesses
        fLeft = determinePolynomial_Falsi(coeffs, leftGuess);
        fRight = determinePolynomial_Falsi(coeffs, rightGuess);

        // for bisection fLeft * fRight < 0.0 must ..
        if (fLeft * fRight > 0.0)
            cout << "incorrect initial guesses" << endl;
        else
            break; // if valid guess  exit the loop
    }

    do
    {
        // calculate the root using false positon formula
        x = (leftGuess * fRight - rightGuess * fLeft) / (fRight - fLeft); 
        fx = determinePolynomial_Falsi(coeffs, x);                              // polynomial value of the root

        // update the initial guesses
        if (fLeft * fx < 0)
            rightGuess = x;
        else
            leftGuess = x;

        // update total steps
        itr++;

    } while (fabs(fx) > tolerable_error); // loop until the polynomial value is within the tolerance level

    cout << " x : " << x <<" => found in total "<< itr << "iterations" << endl;
}