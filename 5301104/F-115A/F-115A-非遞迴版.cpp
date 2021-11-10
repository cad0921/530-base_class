#include<bits/stdc++.h>

using namespace std;
#define co ios::sync_with_stdio(0); cin.tie(0);

int const Max = 1e5 + 100;
int has[Max];

int main() {
    co;
    int n;
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int temp = 0;
        for (int j = i; j != -1; j = x[j]){
            temp++;
        }
        sum = max(temp , sum);
    }
    cout<<sum<<'\n';
}