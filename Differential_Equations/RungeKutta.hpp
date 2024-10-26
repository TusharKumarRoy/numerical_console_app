#include <iostream>
#include <cmath>
using namespace std;

double (*f)(double, double); // Global function pointer to determine the function

double f1(double x, double y) {
    return sin(x);
}

double f2(double x, double y) {
    return 2 * sin(x) * cos(x);
}

double f3(double x, double y) {
    return 5 * x * x - 2 * y;
}

double f4(double x, double y) {
    return (y*y-x*x)/(y*y+x*x);
}

void choseEquation() {
    string choice;

    while (true) {
        cout << endl;
        cout << endl;
        cout << "=>=>=>=>=>=>=>=>=>=> Choose an equation <=<=<=<=<=<=<=<=<=<=" << endl;
        cout << " 1. dy/dx = sin(x)               2. dy/dx = 2*sin(x)*cos(x)" << endl;
        cout << " 3. dy/dx = 5*x*x - 2*y          4. dy/dx = (y*y-x*x)/(y*y+x*x)" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << endl;
        cout << "choice : ";
        cin >> choice;
        cout << endl;

        if (choice != "1" && choice != "2" && choice != "3" && choice != "4") {
            cout << "Invalid choice. Please enter a valid choice." << endl;
        } else {
            break;
        }
    }

    // set the function pointer based on users choice
    switch (choice[0]) {
        case '1':
            f = f1;
            break;
        case '2':
            f = f2;
            break;
        case '3':
            f = f3;
            break;
        case '4':
            f = f4;
            break;
    }
}

void Runge_Kutta() {
    choseEquation();

    double xo, yo, x, y, h;
    cout << "xo = ";
    cin >> xo;
    cout << "yo = ";
    cin >> yo;
    cout << "x = ";
    cin >> x;
    cout << "h = ";
    cin >> h;

    int steps  = (int) (x-xo)/h;
    
    y = yo;
    int i = 0 ;
    while (i < steps) {
        double k1 = h * f(xo, y);
        double k2 = h * f(xo + (h / 2), y + (k1 / 2));
        double k3 = h * f(xo + (h / 2), y + (k2 / 2));
        double k4 = h * f(xo + h, y + k3);

        double k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        y = y + k;
        xo = xo + h;
        i++;
    }
    cout << endl;
    cout << "Solution found. At x = " << x << ", y = " << y << endl;
    cout << endl;
}

