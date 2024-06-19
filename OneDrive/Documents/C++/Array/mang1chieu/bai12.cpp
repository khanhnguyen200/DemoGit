#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
// int a[1000001];
int b[1000001];
int cnt[1000001];
int dem[256] = {0};
int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    int a[100][100];
    int n;
    cin >> n;
    int idx = 0, i = 2;
    while (idx < n*n)
    {
        if (prime(i))
        {
            b[idx] = i;
            idx++;
        }
        i++;
    }
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 0;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = b[cnt];
            cnt++;
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = b[cnt];
            cnt++;
        }
        c2--;
        for (int i = c2; i >= c1; i--)
        {
            a[h2][i] = b[cnt];
            cnt++;
        }
        h2--;
        for (int i = h2; i >= h1; i--)
        {
            a[i][c1] = b[cnt];
            cnt++;
        }
        c1++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
