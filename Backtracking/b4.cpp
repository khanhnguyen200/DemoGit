#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[105][105];
int n;
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        cout << s << endl;
    }
    if (i + 1 <= n && a[i + 1][j] == 1)
    {
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j, s);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1)
    {
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1, s);
        a[i][j + 1] = 1;
        s.pop_back();
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    Try(1, 1, "");
}