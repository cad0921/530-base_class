#include <bits/stdc++.h>
using namespace std;

//結構宣告
struct node{
    int x , y;
};
node all[101];

//判斷大小
bool can(node a , node b){
    return a.x < b.x;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n , day;
	cin >> n >> day;
	for (int i = 0; i<n;i++){
	    cin >> all[i].x;
	    all[i].y = i+1;
	}
    stable_sort(all , all+n , can); //merge_sort的方法
    
    vector<int> ok;
    int sum = 0; //計算目前學的天數
    //抓取天數
    for (int i = 0; i < n; i++) {
        if (sum + all[i].x > day) {
            break;
        }
        sum += all[i].x;
        ok.push_back(all[i].y);
    }
    //輸出
    cout << ok.size() << '\n';
    for(int i=0;i<ok.size();i++){
        cout<<ok[i]<<" ";
    }
	return 0;
}