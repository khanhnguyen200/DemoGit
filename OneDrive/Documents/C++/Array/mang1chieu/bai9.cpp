#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int cnt[1000001];
int cnt1[256] = {0};
string convert(string s)
{
    int a = s.size();
    for (int i = 0; i < a; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word)
        {
            v.push_back(convert(word));
        }
        int a = v.size();
        string email = "";
        email += v[a - 2];

        for (int i = 0; i < a - 2; i++)
        {
            email += v[i][0];
        }
        mp[email]++;
        if (mp[email] == 1)
        {
            email += "@vnu.edu.vn";
            cout << email << endl;
        }
        else
        {
            cout << email << mp[email] << "@vnu.edu.vn";
            cout << endl;
        }
        string s2 = v[a - 1];
        stringstream ss2(s2);
        string tmp;
        while (getline(ss2, tmp, '/'))
        {
            int x = stoi(tmp);
            cout << x;
        }
        cout << endl;
    }
}