// Sinh rổ hợp chập k của n phần tử .
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int x[100], n;
int used[100];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            x[i] = j;
            used[j] = 1;
            if (i == n)
            {
                for (int k = 1; k <= n; k++)
                {
                    cout << x[k] << ' ';
                }
                cout << endl;
            }
            else
            {
                Try(i + 1);
            }
            used[j] = 0;
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
    cin >> n;
    Try(1);
}