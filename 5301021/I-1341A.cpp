#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Case;
    cin>>Case;
    while(Case--){
        int n , a , b , c , d;
        cin>>n>>a>>b>>c>>d;
        
        if( n*(a+b) < (c-d) || n*(a-b) > (c+d)){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
        
    }
    return 0;
}
