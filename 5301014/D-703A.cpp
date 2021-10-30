#include <iostream>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    co;
    int n;
    cin >> n;
    int a = 0 , b = 0;
    int x , y;
    while(n--){
        cin>>x>>y;
        if(x>y)
            a++;
        else if(y>x)
            b++;
    }
    if(a>b){
        cout<<"Mishka";
    }else if(a==b){
        cout<<"Friendship is magic!^^";
    }else{
        cout<<"Chris";
    }
}
