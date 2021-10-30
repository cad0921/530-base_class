#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ii int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    while(n--){
        ii Max = -1 , Min = 99999 , max_in = -1 , min_in = -1;
        
        ii Case;
        cin>>Case;
        
        ii x[Case];
        for(ii i=0;i<Case;i++){
            cin>>x[i];
            if(x[i]<Min){
                Min = x[i];
                min_in = i;
            }
            if(x[i]>Max){
                Max = x[i];
                max_in = i;
            }
        }
        ii back_max = Case-max_in;
        ii back_min = Case-min_in;
        max_in++;
        min_in++;
        int sum = 0;
        sum = min( {
                    max(max_in , min_in) , 
                    max(back_max , back_min) , 
                    (back_max + min_in) , 
                    (back_min+max_in)
                });
        cout<<sum<<'\n';
    }
    return 0;
}