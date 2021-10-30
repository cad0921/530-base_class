#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
char Map[11][11];
bool can[11][11];
int n , m;
int sum = 0;
void row(int r){        //計算行
    bool ok = true;
    for(int i=0;i<m;i++){
        if(Map[r][i] == 'S'){
            ok = !ok;
            break;
        }
    }
    if(ok){
        for(int i=0;i<m;i++){
            if(can[r][i]){
                can[r][i] = false;
                sum++;
            }
        }
    }
}
void col(int c){        //計算列
    bool ok = true;
    for(int i=0;i<n;i++){
        if(Map[i][c] == 'S'){
            ok = !ok;
            break;
        }
    }
    if(ok){
        for(int i=0;i<n;i++){
            if(can[i][c]){
                can[i][c] = false;
                sum++;
            }
        }
    }
}
int main() {
    co;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Map[i][j];
            can[i][j] = true;
        }
    }
    for(int i=0;i<n;i++)
        row(i);
    for(int i=0;i<m;i++)
        col(i);

    cout<<sum<<'\n';

}
