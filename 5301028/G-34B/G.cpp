#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;
    int m, n;
    cin >> m >> n;
    int x[m];
    for(int i=0;i<m;i++)
        cin>>x[i];
    sort(x , x+m);
    int sum = 0;
    for(int i=0;i<n;i++){
        if(x[i]>=0)
            break;
        sum+=x[i];
    }
    cout<<abs(sum)<<'\n';
    return 0;
}