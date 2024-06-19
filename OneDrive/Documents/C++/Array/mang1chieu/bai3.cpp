#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int b[1000001];
int check(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return 1;
        }
        else
        {
            if (a[m] > x)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (check(a, i + 1, n - 1, x + a[i]))
        {
            cout << 1;
            return 0;
        }
    }
    cout << -1;
}