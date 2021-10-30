#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int Case;
    cin>>Case;
    while(Case--){
        int n,t;
        cin>>n;
        int odd = 0 , even = 0;
        for(int i=0;i<n*2;i++){
            cin>>t;
            if(t%2==0)
                even++;
            else
                odd++;
        }
        if(odd==even)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
    }
    
    return 0;
}