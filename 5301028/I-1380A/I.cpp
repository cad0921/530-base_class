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
        cin>>n;
        int x[n];
        int Max = 0;
        int in = 0;
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=1;i<n-1;i++){
            if(x[i]>x[i-1] && x[i]>x[i+1]) {
                in = i;
                break;
            }
        }
        if(in==0||in==n-1)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<in<<" "<<in+1<<" "<<in+2<<"\n";
        }

    }
    return 0;
}
