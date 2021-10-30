#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main() {
    co;
    long long int n;
    cin >> n;
    if( n%2 == 0){
        cout << n/2;
    }else{
        cout << -(n+1)/2;
    }
    return 0;
}