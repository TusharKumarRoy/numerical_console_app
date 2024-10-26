#include <bits/stdc++.h>

#define terminatingItr 30
#define tolerance 0.0001

using namespace std;

void gaussSeidelMethod(int n)
{
    vector<vector<double>> matrix(n, vector<double>(n + 1));
    vector<double> x0(n, 0), x1(n);
    int i, j, iterations;
    double sum;

    cout << endl;
    cout << "Enter coefficients of equations : " << endl;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (iterations = 1; iterations <= terminatingItr; iterations++)
    {
        int ifConverge = 1;
        for (i = 0; i < n; i++)
        {
            sum = matrix[i][n];
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum -= matrix[i][j] * x0[j];
                }
            }
            x1[i] = sum / matrix[i][i];
            if (fabs(x1[i] - x0[i]) > tolerance)
            {
                ifConverge = ifConverge * 0;
            }
            x0[i] = x1[i];
        }

        if (ifConverge)
        {
            cout << "\nSolutions are: ";
            for (i = 0; i < n; i++)
            {
                cout << x0[i] << " ";
            }
            cout << endl;
            return;
        }
    }

    cout << "\n\nCould not converge to solution in " << terminatingItr << " iterations" << endl;
}

void callGaussSeidelMethod()
{
    int n;
    cout << "Enter the number of variables : ";
    cin >> n;
    gaussSeidelMethod(n);
    return;
}