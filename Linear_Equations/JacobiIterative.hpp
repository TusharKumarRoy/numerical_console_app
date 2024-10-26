#include <bits/stdc++.h>

#define terminatingItr 150
#define tolerance 0.0001

using namespace std;

void jacobiMethod(int n)
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
        for (i = 0; i < n; i++)
        {
            sum = matrix[i][n];
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum = sum - matrix[i][j] * x0[j];
                }
            }
            x0[i]=x1[i];
            x1[i] = sum / matrix[i][i];
        }
        int ifConverge=1;
        for (i = 0; i < n; i++)
        {
            if (fabs(x1[i] - x0[i]) > tolerance)
            {
                ifConverge=ifConverge*0;
            }
        }
        if(ifConverge==1){
            cout<<"\nSolutions are: ";
            for(auto it:x0){
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }

    }

    cout << "\n\nCould not converge to solution in " << terminatingItr << " iterations" << endl ;
}

void callJacobiIterativeMethod()
{
    int n;
    cout << "Enter the number of variables: ";
    cin >> n;
    jacobiMethod(n);
    return;
}