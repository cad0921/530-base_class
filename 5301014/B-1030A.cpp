#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    co;
    int n;
    cin>>n;
    bool can = true;
    int t;
    while(n--){
        cin>>t;
        if(t) {
            can = false;
        }
    }
    if(!can)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}