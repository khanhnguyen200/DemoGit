#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int first(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            r = m - 1;
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
    return res;
}
int last(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            l = m + 1;
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
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int c1 = first(a, i + 1, n - 1, k + a[i]);
        int c2 = last(a, i + 1, n - 1, k + a[i]);
        if (c1 != -1)
        {
            cnt += c2 - c1 + 1;
        }
    }
    cout << cnt;
}