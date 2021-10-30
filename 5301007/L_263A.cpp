#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main() {
    co;
    int t;
    int n = -1 , m = -1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>t;
            if(t==1){
                n = i;
                m = j;
            }
        }
    }
    cout<<abs(n-2) + abs(m-2) <<'\n';
    return 0;
}