#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int solve(int n) {
    int sum = 0;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < n - 1; i++) {

        while ((max(x[i], x[i + 1]) / (double)min(x[i], x[i + 1])) > 2) {
            if (x[i] < x[i + 1])
                x[i] *= 2;
            else
                x[i] = (x[i]+1) / 2;
            sum++;
        }
    }
    cout << sum << '\n';
}

int main() {
    co;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        solve(n);
    }
}