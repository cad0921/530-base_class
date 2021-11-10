#include <iostream>
#include <algorithm>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main() {
	co;
	int n;
	cin>>n;
	while(n--){
		int has;
		cin>>has;
		int x[has];
		for(int i=0;i<has;i++){
			cin>>x[i];
		}
		sort(x , x+has);
		double t = x[has-1];
		double sum = 0;
		for(int i=0;i<has-1;i++)
			sum+=x[i];
		sum/=(has-1);
		
		printf("%.9f\n",t+sum);
	}
	return 0;
}