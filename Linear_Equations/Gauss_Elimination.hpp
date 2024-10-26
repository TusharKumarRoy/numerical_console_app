double eps=1e-7;
bool row_swap(vector<vector<double>> &a, int i, int n, int ex=1)
{
    for(int j=i+1;j<n;j++) 
    {
        if(a[j][i]!=0)
        {
        for(int k=0;k<n+ex;k++) swap(a[j][k],a[i][k]);
        return true;
        }
    }
    cout << "Invalid" << '\n';
    return false;
}
bool gauss_Elimination(vector<vector<double>> &a, int n, int ex=1)
{
    for(int i=0;i<n;i++)
    {
        if(abs(a[i][i])<=eps && !row_swap(a,i,n,ex)) return false;
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[j][i])<=eps) continue;
            double u=a[j][i]/a[i][i];
            for(int k=i;k<n+ex;k++) a[j][k]=a[i][k]*u-a[j][k];
        }
    }
    return true;
}
void callGaussEliminationMethod()
{
    int n=input(0);
    auto a=input2(n,1);
    if(gauss_Elimination(a,n)) display2(n,1,a);
}
