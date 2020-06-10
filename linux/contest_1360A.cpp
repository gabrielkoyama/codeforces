#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve(){
	int n,el,ans=0;
	cin >> n;

	bool flag=false;
	int a,b, hArea;
	int c;

	while(n--){
		cin >> a >> b;
		hArea = (a*b)*2;
		for (int i = 1; i < 1000; ++i)
		{
			c=i;
			c*=c;
			if(c >= hArea) {
				cout << c << endl;
				break;
			}
		}
	}
}

int main(){
	solve();
	// int t;
	// cin >> t;
	// forn(i, t){
	// 	cout << i << endl;
	// }

	// int a=2;
	// int b=4;

	// cout << max(a, b) << endl;
	return 0;
}