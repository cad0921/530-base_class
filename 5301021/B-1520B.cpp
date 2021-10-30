#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        
        ll base = 1;
        ll sum = 0;
        
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
                if(base*j<=t)
                    sum++;
            }
            base = base*10+1;
        }
        cout<<sum<<'\n';
    }
    return 0;
}