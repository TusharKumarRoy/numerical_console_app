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
void matrix_inverse(vector<vector<double>> &a, int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) a[i].push_back((i==j));
    if(!row_echelon(a,n,n)) return;
    vector<vector<double>> ans(n,vector<double>(n));
    for(int i=0;i<n;i++)
        for(int j=n;j<n+n;j++)  ans[i][j-n]=a[i][j];
    display2(n,0,ans);
}
void callMatrix()
{
    int n=input();
    auto a=input2(n,0);
    matrix_inverse(a,n);
}