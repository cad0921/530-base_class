#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    co;
    int Case;
    cin>>Case;
    while(Case--){
        int n;
        cin>>n;
        set<int> all;
        int t;
        for(int i=0;i<n;i++) {
            cin>>t;
            all.insert(t);
        }
        cout<<all.size()<<'\n';
    }
}