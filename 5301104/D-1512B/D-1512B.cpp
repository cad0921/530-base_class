#include<bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;
    int Case;
    cin >> Case;
    while (Case--) {
        string s;
        int n;
        cin >> n;
        int x[2][2];
        int in = 0;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (s[j] == '*') {
                    x[in][0] = i;
                    x[in][1] = j;
                    in++;
                }
            }
        }
        int sum[2][2];
        if (x[0][0] != x[1][0] && x[0][1] != x[1][1]) {
            sum[0][0] = x[0][0];
            sum[0][1] = x[1][1];
            sum[1][0] = x[1][0];
            sum[1][1] = x[0][1];
        }
        if (x[0][0] == x[1][0]) {
            if (x[0][0] + 1 < n) {
                sum[0][0] = x[0][0] + 1;
                sum[0][1] = x[0][1];
                sum[1][0] = x[1][0] + 1;
                sum[1][1] = x[1][1];
            } else {
                sum[0][0] = x[0][0] - 1;
                sum[0][1] = x[0][1];
                sum[1][0] = x[1][0] - 1;
                sum[1][1] = x[1][1];
            }
        }
        if (x[0][1] == x[1][1]) {
            if (x[0][1] + 1 < n) {
                sum[0][0] = x[0][0];
                sum[0][1] = x[0][1] + 1;
                sum[1][0] = x[1][0];
                sum[1][1] = x[1][1] + 1;
            } else {
                sum[0][0] = x[0][0];
                sum[0][1] = x[0][1] - 1;
                sum[1][0] = x[1][0];
                sum[1][1] = x[1][1] - 1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((sum[0][0] == i && sum[0][1] == j) || (x[0][0] == i && x[0][1] == j) ||
                    (x[1][0] == i && x[1][1] == j) || (sum[1][0] == i && sum[1][1] == j)) {
                    cout << '*';
                } else {
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
}