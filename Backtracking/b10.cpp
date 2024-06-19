#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[101][101], x[101], xuoi[101], nguoc[101], cot[101];
ll sum = 0;
bool check = false;
int max1 = INT_MIN;
void nhap()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] == 0 && xuoi[i - j + 8] == 0 && nguoc[i + j - 1] == 0)
        {
            x[i] = j;
            sum += a[i][j];
            cot[j] = 1;
            xuoi[i - j + 8] = 1;
            nguoc[i + j - 1] = 1;
            if (i == 8)
            {
                if (sum > max1)
                {
                    max1 = sum;
                }
            }
            else
            {
                Try(i + 1);
            }
            sum -= a[i][j];
            cot[j] = 0;
            xuoi[i - j + 8] = 0;
            nguoc[i + j - 1] = 0;
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
    nhap();
    Try(1);
    cout << max1;
}