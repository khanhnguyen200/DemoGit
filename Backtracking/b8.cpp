#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n, m, a[101][101];
int cnt = 0;
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Try(int i, int j)
{
    if (i == n && j == m)
    {
        cnt++;
        return;
    }
    if (i < n)
    {
        Try(i + 1, j);
    }
    if (j < m)
    {
        Try(i, j + 1);
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
    Try(1, 1);
    cout << cnt;
}