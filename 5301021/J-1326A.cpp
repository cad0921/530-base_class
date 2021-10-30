#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;

    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t==1) {
            cout << "-1\n";
            continue;
        }
        for(int i=1;i<t;i++){
            cout<<'9';
        }
        cout<<"8\n";
    }
    return 0;
}
