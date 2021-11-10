#include <iostream>
using namespace std;
int main()
{
    int Case;
    cin >> Case;
    while(Case--){
        int n, t;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n ; i++){
            cin >> t;
            sum += t;
        }
        if(sum<n)
            cout<<1<<'\n';
        else
            cout<<sum-n<<'\n';
        
    }
    return 0;
}