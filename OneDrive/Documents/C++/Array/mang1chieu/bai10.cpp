#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int cnt[1000001];
int cnt1[256] = {0};
int main()
{
    int n, s;
    cin >> n >> s;
    if (9 * n < s || s == 0 && n > 1)
    {
        cout << "NOT FOUND";
    }
    else
    {
        int be[n], lon[n];
        int tmp = s;
        for (int i = 0; i < n; i++)
        {
            if (s >= 9)
            {
                lon[i] = 9;
                s -= 9;
            }
            else
            {
                lon[i] = s;
                s = 0;
            }
        }
        tmp--;
        for (int i = n - 1; i >= 0; i--)
        {
            if (tmp >= 9)
            {
                be[i] = 9;
                tmp -= 9;
            }
            else
            {
                be[i] = s;
                tmp = 0;
            }
        }
        be[0] += 1;
        for (int i = 0; i < n; i++)
        {
            cout << lon[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << be[i];
        }
    }
}