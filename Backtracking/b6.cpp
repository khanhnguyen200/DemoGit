// Cho dãy số A[] = {a1, a2, ... an} và số tự nhiên K.Hãy tìm tất cả các dãy con của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K.Các phần tử của dãy số A[] là nguyên dương và có giá trị khác nhau. Ví dụ : với dãy con A[] = {5, 10, 15, 20, 25},
// K = 50 ta có 3 dãy con{5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n, k, a[1001], b[1001];
void nhap()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
void Try(int pos, int tong, vector<int> res)
{
    for (int j = pos; j <= n; j++)
    {
        res.push_back(a[j]);
        tong += a[j];
        if (tong == k)
        {
            cout << "[";
            for (int l = 0; l < res.size(); l++)
            {
                cout << res[l];
                if (l == res.size() - 1)
                {
                    cout << "]";
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
        else if (tong < k)
        {
            Try(j + 1, tong, res);
        }
        tong -= a[j];
        res.pop_back();
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
    vector<int> v;
    Try(1, 0, v);
}