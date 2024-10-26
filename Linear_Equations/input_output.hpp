#include<bits/stdc++.h>
using namespace std;
void display(int op)
{
    cout << "Enter the " << (op==0?"Matrix:":"Coefficients") <<'\n';
}
int input(int op)
{
    int n;
    cout << "Enter the Number of " << (op?"rows/columns":"Equations") << " : ";
    cin >> n;
    return n;
}
auto input1(int n)
{
    vector<vector<double>> a(n,vector<double>(n));
    vector<double>b(n);
    display(1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>a[i][j];
        cin >> b[i];
    }
    return make_pair(a,b);
}
auto input2(int n,int ex)
{
    vector<vector<double>> a(n,vector<double>(n+ex));
    display(ex);
    for(int i=0;i<n;i++)
        for(int j=0;j<n+ex;j++) cin >> a[i][j];
    return a;
}
void display1(const vector<double> &ans)
{
   cout << "The Solutions are:\n";
   int n=ans.size();
   for(int i=1;i<=n;i++) cout << "x1 = "<<ans[i-1] << '\n';
   cout << '\n';
}
void display2(int n, int ex, vector<vector<double>> ans)
{
    cout << "Here is the solution:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+ex;j++) cout << ans[i][j] << ' ';
        cout << '\n';
    }
    cout << '\n';
}