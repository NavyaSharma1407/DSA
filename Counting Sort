#include<bits/stdc++.h>
using namespace std;
void find(vector<int>& a, string& s){
	int n = s.size() , i = 0;
	while(i < n){
		int num = 0 , x = 1;
		if(s[i] == '-') x = -1;
		while(i<n && s[i] != ' ') num = num*10 + s[i++]-'0';
		a.push_back(num*x); i++;
	}
}
int main(){
	int n; cin>>n; cin.ignore();
	string s; getline(cin,s);
	vector<int>a;
	find(a,s);
	if(a.size() != n){
		cout << -1<< endl;
		return 0;
	}
	int maxi = *max_element(a.begin() , a.end());
	int mini = *min_element(a.begin() , a.end());
	vector<int>arr(maxi-mini+1 , 0);
	for(auto it : a){
		arr[it-mini]++;
	}
	int i = 0 , j = 0;
	while(i <= maxi-mini){
		while(arr[i]){
			a[j++] = i+mini;
			arr[i]--;
		}
		i++;
	}
	cout << a[0];
	for(int i=1;i<a.size();i++){

