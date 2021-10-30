#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    co;
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        int x[m];
        long long sum = 0;
        for(int i=0;i<m;i++){
            cin>>x[i];
            sum+=x[i];
        }
        int t = 0;
        if(sum%m==0){
            sum/=m;
            for(int i=0;i<m;i++){
                if(x[i] > sum )
                    t++;
            }
            if(m==1)
                t = 0;
            cout<<t<<'\n';
        }else {
            cout << -1 << '\n';
        }


    }
    return 0;
}