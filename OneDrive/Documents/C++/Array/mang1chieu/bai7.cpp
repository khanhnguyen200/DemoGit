#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int cnt[1000001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    int end = -1, max_size = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] == 0 && max_size == 0)
        {
            max_size = 1;
            end = i;
        }
        if (sum == 0)
        {
            end = i;
            max_size = i + 1;
        }
        if (mp.find(sum) != mp.end())
        {
            if (i - mp[sum] > max_size)
            {
                max_size = i - mp[sum];
                end = i;
            }
        }
        else
        {
            mp[sum] = i;
        }
    }
    if (max_size == 0)
    {
        cout << "NOT FOUND";
    }
    else
    {
        for (int i = end - max_size + 1; i <= end; i++)
        {
            cout << a[i] << " ";
        }
    }
}