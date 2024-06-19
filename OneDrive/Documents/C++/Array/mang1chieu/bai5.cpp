#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int b[1000001];
int lastpos(int a[], int l, int r, int x)
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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (k - a[i] > 0)
        {
            int r = lastpos(a, i + 1, n - 1, k - a[i]);
            {
                if (r != -1)
                {
                    cnt += r - i;
                }
            }
        }
    }
    cout << cnt;
}