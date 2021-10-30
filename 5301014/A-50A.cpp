#include <iostream>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    co;
    int a,b;
    cin>>a>>b;
    int sum = a*(b/2);
    if(b%2==1)
        sum+=a/2;
    
    cout<<sum;
}