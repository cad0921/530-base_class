#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int a = t/3;
        int b = a;
        if(t%3==1)
            a+=1;
        else if(t%3==2)
            b+=1;
        cout<<a<<" "<<b<<'\n';
            
    }
    return 0;
}