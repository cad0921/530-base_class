#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Case;
    cin >> Case;
    while (Case--) {
        ll n, m, x;
        cin >> n >> m >> x;
        ll t = x % n;
        if (t == 0)
            t = n;
        cout << m * (t - 1) + (x + n - 1) / n << '\n';
    }
    return 0;
}