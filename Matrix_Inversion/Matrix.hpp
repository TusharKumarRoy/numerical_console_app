#include "Jordan_Elimination.hpp"
bool row_echelon(vector<vector<double>> &a, int n, int ex=1)
{
    if(!jordan_Elimination(a,n,ex)) return false;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j<n+ex;j++)if(abs(a[i][j])>eps) a[i][j]/=a[i][i];
        a[i][i]=1;
    }
    return true;
}
vector<vector<double>> matrix_inverse(vector<vector<double>> &a, int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) a[i].push_back((i==j));
    row_echelon(a,n,n);
    vector<vector<double>> ans(n,vector<double>(n));
    for(int i=0;i<n;i++)
        for(int j=n;j<n+n;j++)  ans[i][j-n]=a[i][j];
    return ans;
}