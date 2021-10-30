#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    co;
    long long n , m , a;
    cin>>n>>m>>a;
    n+= (a-1);
    m+= (a-1);
    cout<<(n/a) * (m/a)<<'\n';
}