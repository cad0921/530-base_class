#include<bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int x[2005];
int vi[2005];
int sum = 0;
void dfs(int a , int h){
    vi[a] = 1;
    if(x[a] == -1){
        sum = max(sum , h);
        return;
    }
    return dfs(x[a] , h+1);
}
int main() {
    co;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    for(int i=1;i<=n;i++){
        if(vi[i] == 0){
            dfs(i , 1);
        }
    }
    cout<<sum<<'\n';
}