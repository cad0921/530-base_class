#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;
    int n;
    cin >> n;
    while (n--) {
        int Case;
        cin>>Case;
        int t = Case / 2020;
        if(Case>=2020*t && Case<=2020*t+t){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
