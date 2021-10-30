#include <bits/stdc++.h>

#define ll long long
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int Case;
    cin>>Case;
    while(Case--) {
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0, j = 0; i < n; i++) {
            if (x[i] % 2 == 0) {
                swap(x[i], x[j++]);
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(x[i], x[j] * 2) > 1) {
                    sum++;
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}