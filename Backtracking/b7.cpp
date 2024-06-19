// Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s? Các tập hợp là hoán vị của nhau chỉ được tính là một.
// Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n, k, a[1001], b[1001], cnt = 0, s;
void nhap()
{
    cin >> n >> k >> s;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void Try(int pos, int tong, vector<int> res)
{
    for (int j = pos; j <= n; j++)
    {
        res.push_back(a[j]);
        tong += a[j];
        if (tong == s && res.size() == k)
        {
            cnt++;
        }
        else if (tong < s)
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
    cout << cnt;
}