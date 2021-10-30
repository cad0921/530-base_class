#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    co;
    int n;
    cin>>n;
    char x;
    int A = 0 , D = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x=='A')
            A++;
        else
            D++;
    }
    if(A>D){
        cout<<"Anton";
    }else if(A<D){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}
