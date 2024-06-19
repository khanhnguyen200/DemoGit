#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int cnt[1000001];
int cnt1[256] = {0};
bool cmp(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() > b.size();
    }
    else
    {
        return a > b;
    }
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    s += 'mmmmm';
    int a = s.size();
    string tmp = "";
    for (int i = 0; i < a; i++)
    {
        if (isdigit(s[i]))
        {
            tmp += s[i];
        }
        else
        {
            while (tmp.size() > 1 && tmp[0] == '0')
            {
                tmp.erase(0, 1);
            }
            if (tmp != "")
            {
                v.push_back(tmp);
                tmp = "";
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0];
}
