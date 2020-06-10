#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	if(n % 2 == 0) {
		int check = (n/2);
		if(check % 2 == 0) cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";

	return 0;
}
