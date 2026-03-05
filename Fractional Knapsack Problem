#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , w; cin >> n >> w;
	vector<tuple<double,int,int>>a(n);
	for(int i=0;i<n;i++){
		int value , weight; cin >> value >> weight;
		double ratio = (double)value / (double)weight;
		a[i] = {ratio , value , weight};
	}
	sort(a.begin(),a.end(),greater<>());
	double w1 = w , ans = 0;
	int i = 0;
	while(w1 > 1e-6 && i < n){
		auto it = a[i++];
		double ratio = get<0>(it);
		int value = get<1>(it);
		int weight = get<2>(it);
		if(w1 >= weight){
			ans += value;
			w1 -= weight;
		}else{
			ans += w1 * ratio;
			w1 = 0;
		}
	}
	cout << fixed << setprecision(6);
	cout << ans << endl;
}
