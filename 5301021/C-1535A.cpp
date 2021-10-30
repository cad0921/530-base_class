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
        int x[4];
        for(int i=0;i<4;i++)
            cin>>x[i];
        bool can = true;
        if(max(x[0] , x[1]) < min(x[2] , x[3]) )
            can = false;
        if(max(x[2] , x[3]) < min(x[0] , x[1]) )
            can = false;
        
        if(can)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}