#include<bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

bool number[50000];
vector<long long> x;

int main() {
    co;
    int Case;
    cin >> Case;
    memset(number, false, sizeof(number));
    for (int i = 2; i <= 30000; i++) {
        if (!number[i]) {
            x.push_back(i);
            for(int j=i*i;j<=30000;j+=i){
                number[j] = true;
            }
        }
    }

    sort(x.begin(),x.end());
    while (Case--) {
        int n;
        cin >> n;

        long long l = *lower_bound(x.begin(),x.end(),n+1);
        long long r = *lower_bound(x.begin(),x.end(), l+n);
        cout<<l*r<<'\n';

    }
}