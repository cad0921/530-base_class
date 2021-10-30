#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Case;
    cin >> Case;
    while (Case--) {
        int n;
        cin >> n;
        if(n%2==0) {
            for (int i = 2; i <= n; i += 2) {
                cout << i << ' ' << i - 1 << ' ';
            }
        }
        else{
            for (int i = 2; i <= n-2; i += 2) {
                cout << i << ' ' << i - 1 << ' ';
            }
            cout<<n<<' '<<n-2<<' '<<n-1<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
