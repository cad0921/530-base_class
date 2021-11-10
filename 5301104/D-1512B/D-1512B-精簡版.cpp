#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int t,n,ax,ay,bx,by,c;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		char x[n][n];
		c=0;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<n;j++){
				x[i][j]=s[j];
				if(s[j]=='*'){
					if(c==0){
						ax=i;
						ay=j;
						c++;
					}else{
						bx=i;
						by=j;
					}
				}
			}
		}
		if(ax==bx){
			if(ax==0){
				x[ax+1][ay]='*';
				x[bx+1][by]='*';
			}else{
				x[ax-1][ay]='*';
				x[bx-1][by]='*';
			}
		}else if(ay==by){
			if(ay==0){
				x[ax][ay+1]='*';
				x[bx][by+1]='*';
			}else{
				x[ax][ay-1]='*';
				x[bx][by-1]='*';
			}
		}else{
			x[ax][by]='*';
			x[bx][ay]='*';
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<x[i][j];
			cout<<'\n';
		}
	}
	return 0;
}