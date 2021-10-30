#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *neday , int *in , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(neday[j] > neday[j+1]){
                swap(neday[j] , neday[j+1]);
                swap(in[j] , in[j+1]);
            }
        }
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n , day;
	cin>>n>>day;
	int neday[n];
	int in[n];
	for(int i=0;i<n;i++){
	    cin>>neday[i];
	    in[i] = i+1;
	}
    bubble_sort(neday , in , n);
    int sum = 0;
    vector<int> all;
    for(int i=0;i<n;i++){
        if(sum+neday[i]>day){
            break;
        }
        sum+=neday[i];
        all.push_back(in[i]);
    }
    cout<<all.size()<<'\n';
    for(int i=0;i<all.size();i++){
        cout<<all[i]<<" ";
    }
    
	return 0;
}