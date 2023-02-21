#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	#ifndef ONLILNE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/

	int n; 
	cin>>n;

	int var = 0;

	while(n--){
		string s;
		cin>>s;

		for(auto i: s){
			if(i == '+' || i == '-'){
				if (i=='+') var++;
				else var--;
				break;
			}
		}
	}

	cout<<var;
	return 0;
}