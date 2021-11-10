#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Case;
    cin >> Case;
    while(Case--){
        int a1 , a2 , b1 , b2 , f1 , f2;
        cin>>a1>>a2>>b1>>b2>>f1>>f2;
        if(a1>b1){
            swap(a1,b1);
            swap(a2,b2);
        }else if(a1==b1){
            if(a2>b2){
                swap(a1,b1);
                swap(a2,b2);
            }
        }
        if((a1==b1 && a1==f1 && a2<f2 && b2>f2) || (a2 == b2 && b2 == f2 && a1<f1 && b1>f1)){
            cout<<abs(a1-b1)+abs(a2-b2)+2<<'\n';
        }else{
            cout<<abs(a1-b1)+abs(a2-b2)<<'\n';   
        }
    }
    
    return 0;
}