#include <iostream>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    co;
    int n;
    cin >> n;
    int Case;
    while(n--){
        cin >> Case;
        for(int i=2;i<=Case;i++)
            cout<<i<<" ";
        cout<<1<<'\n';
    }
}