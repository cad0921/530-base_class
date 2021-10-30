#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int Case;
    cin>>Case;
    while(Case--){
        int a , b , c;
        cin>>a>>b>>c;
        long long n = 2*abs(a-b);
        if(a>n||b>n||c>n)
            cout<<"-1\n";
        else{
            long long t = n/2+c;
            while(t > n)
                t -=n;
            cout<<t<<'\n';
            
        }
    }
    return 0;
}