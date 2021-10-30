#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int Case;
    cin>>Case;
    while(Case--){
        string s;
        cin >> s;
        int a =0 , b=0 , c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')
                a++;
            if(s[i]=='B')
                b++;
            if(s[i]=='C')
                c++;
        }
        if(b==a+c){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}