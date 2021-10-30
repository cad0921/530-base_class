#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main() {
    co;
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length())
        cout << "NO";
    else {
        bool can = true;
        for (int i = 0; i < a.length(); i++) {
            if(a[i] != b[b.length()-i-1]) {
                can = false;
            }
        }
        if(can) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
