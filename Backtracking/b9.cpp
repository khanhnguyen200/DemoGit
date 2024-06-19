// Cho một bàn cờ vua có kích thước N x N.Hãy đếm số cách đặt N quân hậu vào bàn cờ sao cho không có 2 con hậu nào ăn nhau.
// VD : 8 = > 92;
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n, cot[100], xuoi[100], nguoc[100], cnt = 0, x[100];
void nhap()
{
    cin >> n;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0)
        {
            x[i] = j;
            cot[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
            // => reset lai nc di cua lan no chon dc quan hau dung(cnt=1) de ve 0 cho cac nc di khac.
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
    cout << cnt;
}