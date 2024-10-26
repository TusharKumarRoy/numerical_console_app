#include <bits/stdc++.h>
using namespace std;

//method to determine the value of the polynomial for a value of varible x
double determinePolynomial_Bisection(const vector<double>& coeffs , double x)
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
    cout << "degree of the polynomial : ";
    cin >> degree;

    // take input of coefficients
    vector<double> coeffs(degree+1);

    for(int i = 0 ; i <= degree ; i++)
    {
        cout << "coefficient of x^" << degree - i <<" : ";
        cin >> coeffs[i];
    }


    float leftGuess,rightGuess,x,fLeft,fRight,fx,tolerable_error;
    int itr = 0 ;  // to keep track of total steps to arrive at solution

    while(true)
    {
        // input initial guesses from user
        cout << "enter 1st guess : ";
        cin >> leftGuess;
        cout << "enter 2nd guess : ";
        cin >> rightGuess;
        cout << "enter tolerable error : ";
        cin >> tolerable_error;

        // determine polnomial value of those guesses
        fLeft = determinePolynomial_Bisection(coeffs , leftGuess);
        fRight = determinePolynomial_Bisection(coeffs , rightGuess);

        // for bisection fLeft * fRight < 0.0 must ..
        if(fLeft * fRight > 0.0)
            cout << "incorrect initial guesses" << endl;
        else
            break;  // if fLeft * fRight < 0.0 then break free and go to the main block of bisection 
    }

    do
    {
        // calculate the root using bisection formula
        x = (leftGuess + rightGuess) / 2;   
        fx = determinePolynomial_Bisection(coeffs , x);  // polynomial value at root

        // update initial guesses
        if(fLeft * fx < 0)
            rightGuess = x;
        else  
            leftGuess = x;

        // update total steps
        itr++;
    }while(fabs(fx) > tolerable_error);   // checking if the value of the polynomial f(x)  when x = fx is above the tolerance

    cout << " x : " << x <<" => found in total "<< itr << "iterations" << endl;

}