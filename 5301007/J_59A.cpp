#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool ch(char c){
    return c>='A' && c<='Z';
}
int main() {
    co;
    string str;
    cin>>str;
    int b = 0 , s = 0;
    for(int i=0;i<str.length();i++){
        if(ch(str[i]))
            b++;
        else
            s++;
    }
    if(b>s){
        //transform(str.begin() , str.end() , str.begin() , ::toupper);
        for(int i=0;i<str.length();i++)
            str[i] = toupper(str[i]);
    }
    else{
        //transform(str.begin() , str.end() , str.begin() , ::tolower);
        for(int i=0;i<str.length();i++)
            str[i] = tolower(str[i]);
    }
    cout<<str;
    
    return 0;
}