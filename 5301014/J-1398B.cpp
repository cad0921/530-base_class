#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int solve() {
    int sum = 0;
    string s;
    cin >> s;
    vector<int> x;
    for (int i = 0; i < s.size(); i++) {
        if(s[i]=='1') {
            int j = i;
            while (j + 1 < s.size() && s[j + 1] == '1') {
                j++;
            }
            x.push_back(j - i + 1);
            i = j;
        }
    }
    sort(x.rbegin() , x.rend());
    for(int i=0;i<x.size();i+=2)
        sum+=x[i];
    return sum;
}

int main() {
    co;
    int T;
    cin >> T;
    while (T--) {
        cout << solve() << '\n';
    }

}