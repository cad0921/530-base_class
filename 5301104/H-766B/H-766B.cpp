#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x , x+n);
    int t = 0;
    for(int i=1;i<n-1;i++){
        int a = x[i];
        int b = x[i-1];
        int c = x[i+1];
        if(a+b>c && b+c>a && a+c>b){
            t = 1;
            break;
        }
    }
    if(t)
        cout<<"YES";
    else
        cout<<"NO";
}