#include <bits/stdc++.h>
#define co std::ios::sync_with_stdio(0); std::cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    co;
    int n;
    cin>>n;
    while(n--){
        int sum = 10000;
        string s;
        cin>>s;
        int t = s.size();
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(((s[i]-'0')*10 + (s[j]-'0')) % 25 == 0){
                    sum = min(sum , t-i-2);
                    // t = s.length();
                    // j-i-1 中間的
                    // t-j-1 後面數過來
                    // t-i-2 上面融合
                }
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}