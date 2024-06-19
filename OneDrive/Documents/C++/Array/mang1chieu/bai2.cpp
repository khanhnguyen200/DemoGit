#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 1;
int a[1000001];
int f[1000001];
int prime[maxn];
void sang()
{
    for (int i = 0; i < maxn; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(maxn); i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j < maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    f[0] = f[1] = 0;
    for (int i = 2; i < maxn; i++)
    {
        if (prime[i])
        {
            f[i] = f[i - 1] + 1;
        }
        else
        {
            f[i] = f[i - 1];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sang();
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        cout << f[r] - f[l - 1] << endl;
    }
}