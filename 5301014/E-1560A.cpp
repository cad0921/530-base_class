#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;
    int x[1001];
    int in = 1;
    int t = 1;
    while (in <= 1000) {
        if (t % 10 != 3 && t % 3 != 0) {
            x[in] = t;
            in++;
        }
        t++;
    }
    int n;
    cin >> n;
    int Case;
    while (n--) {
        cin >> Case;
        cout << x[Case]<<'\n';
    }
    return 0;
}