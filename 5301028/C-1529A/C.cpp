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
        int Min = 1000;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            Min = min(Min , x[i]);
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(x[i]>Min)
                sum++;
        }
        cout<<sum<<'\n';
    }
    return 0;
}