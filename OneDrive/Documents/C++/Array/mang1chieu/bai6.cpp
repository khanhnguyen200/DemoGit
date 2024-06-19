#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a[1000001];
int cnt[1000001];
int cnt1[256] = {0};
string convert(string s)
{
    s[0] = toupper(s[0]);
    int a = s.size();
    for (int i = 1; i < a; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
string convert1(string s)
{
    int a = s.size();
    for (int i = 0; i < a; i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
int main()
{
    string s1;
    getline(cin, s1);
    stringstream ss(s1);
    string word;
    vector<string> v;
    while (ss >> word)
    {
        v.push_back(word);
    }
    int b = v.size();
    for (int i = 0; i < b - 1; i++)
    {
        cout << convert(v[i]);
        if (i != b - 2)
        {
            cout << ' ';
        }
        else
        {
            cout << ","
                 << " ";
        }
    }
    cout << convert1(v[b - 1]);
    cout << endl;
    cout << convert1(v[b - 1]);
    cout << ","
         << " ";
    for (int i = 0; i < b - 1; i++)
    {
        cout << convert(v[i]);
        if (i != b - 2)
        {
            cout << ' ';
        }
    }
}
