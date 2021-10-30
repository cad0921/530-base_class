#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , Case;
    cin>>n;
    double sum;
    for(int i=0;i<n;i++){
        cin>>Case;
        sum += Case;
    }
    cout<< setprecision(12) << sum/n <<'\n';
}