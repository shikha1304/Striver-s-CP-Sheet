#include<bits/stdc++.h>
using namespace std;

int main(){
	
	/*
	#ifndef ONLILNE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/

	long long x;
	cin>>x;

	long long ans=0;
	long long i=1;

	while(x>=1){
		int d = x%10;

		if(x<10) d = x;

		if(9-d < d) {
			if(x==9) d = 9;
			else d = 9-d;
		}

		ans += d*i;
		x /= 10;
		i *= 10;
	}

	cout<<ans;

	return 0;

}