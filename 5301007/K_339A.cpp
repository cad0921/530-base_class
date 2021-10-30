#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool ch(char c){
    return c>='0' && c<='9';
}
int main() {
    co;
    string str;
    cin>>str;
    int len = (str.length()+1)/2;
    int x[len];
    int in = 0;
    for(int i=0;i<str.length();i++){
        if(ch(str[i])){
            x[in] = str[i]-'0';
            in++;
        }
    }
    sort(x , x+len);
    for(int i=0;i<len;i++){
        cout<<x[i];
        if(i<len-1)
            cout<<'+';
    }

    return 0;
}