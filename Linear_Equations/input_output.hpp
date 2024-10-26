#include<bits/stdc++.h>
using namespace std;
void display(int op)
{
    cout << "Enter the " << (op==0?"Matrix:":"Coefficients") <<'\n';
}
int input()
{
    int n;
    cout << "Enter the Number of Equations: ";
    cin >> n;
    return n;
}
auto input1()
{
    int n=input();
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
auto input2(int ex)
{
    int n=input();
    vector<vector<double>> a(n,vector<double>(n+ex));
    display(ex);
    for(int i=0;i<n;i++)
        for(int j=0;j<n+ex;j++) cin >> a[i][j];
    return a;
}