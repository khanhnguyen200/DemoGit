#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    auto it = upper_bound(a, a + n, x);
    //--it;
    if (it == a+0)
    {
        cout << "NOT FOUND";
    }
    else
    {
        --it; 
        cout << (it-a) ; 
    }
}