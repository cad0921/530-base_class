#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool can = false;

int solve(int n) {
    string x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i][0] == 'O' && x[i][1] == 'O' && !can) {
            x[i][0] = '+';
            x[i][1] = '+';
            can = true;

        } else if (x[i][3] == 'O' && x[i][4] == 'O' && !can) {
            x[i][3] = '+';
            x[i][4] = '+';
            can = true;
        }
    }
    if (can) {
        cout<<"YES"<<'\n';
        for (int i = 0; i < n; i++) {
            cout << x[i] <<'\n';
        }
    } else {
        cout << "NO\n" ;
    }
}

int main() {
    co;
    int n;
    cin >> n;
    solve(n);
}