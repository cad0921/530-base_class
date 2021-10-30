#include <iostream>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    co;
    int n;
    cin>>n;
    int sum = 0;
    while(n--){
        int t = 3;
        int ok = 0;
        while(t--){
            int m;
            cin>>m;
            if(m==1){
                ok++;
            }
        }
        if(ok>1){
            sum++;
        }
    }
    cout<<sum;
}
