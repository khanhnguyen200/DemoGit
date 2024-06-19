#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000][1000];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[4] = {0, -1, 1, 0};
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool check = true;
            for (int k = 0; k < 8; k++)
            {
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m)
                {
                    if (a[i1][j1] >= a[i][j])
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}
