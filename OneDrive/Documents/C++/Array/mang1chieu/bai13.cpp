#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int b[1000001];
int cnt[1000001];
int dem[256] = {0};
int firstPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
        {
            res = m;
            r = m - 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
int lastPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (k - a[i] >= 0)
        {
            int pos1 = firstPos(a, i + 1, n - 1, k - a[i]);
            int pos2 = lastPos(a, i + 1, n - 1, k - a[i]);
            if (pos1 != -1)
            {
                cnt += pos2 - pos1 + 1;
            }
        }
    }
    cout << cnt;
}