#include "Gauss_Elimination.hpp"

bool jordan_Elimination(vector<vector<double>> &a, int n, int ex=1)
{
    if(!gauss_Elimination(a,n,ex)) return false;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(abs(a[j][i])<=eps) continue;
            double l=a[j][i]/a[i][i];
            for(int k=0;k<n+ex;k++) a[j][k]=a[i][k]*l-a[j][k];
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<n+ex;k++) cout << a[j][k] << ' ';
            cout << '\n';
        }
        cout << '\n';
    }
    return true;
}
void callJordan()
{
    int n=input();
    auto a=input(n,1);
    if(jordan_Elimination(a,n,1)) display(n,1,a);
}