// Sinh rổ hợp chập k của n phần tử .
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int x[100], n, k;
void Try(int i)
{
    for (int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if (i == k)
        {
            for (int m = 1; m <= k; m++)
            {
                cout << x[m] << ' ';
            }
            cout << endl;
        }
        else
        {
            Try(i + 1);
        }
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
    cin >> n >> k;
    Try(1);
}