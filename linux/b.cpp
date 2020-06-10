#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxN = 10;
int main(){

	int n;
	int cont;
	vector<string> strings;

	cin >> n;

	for (int i = 0; i < n; ++i){
		string el;
		cin >> el;
		strings.push_back (el);
	}

	cout << "\n";
	for (int i = 0; i < strings.size(); ++i){
		if(strings[i].size() > maxN) cout << strings[i] << endl;
		else {
			string ans;
			ans = strings[i][0] + to_string(strings[i].size()) + strings[i][strings[i].size()-1];
			cout <<  ans << endl;
		}
	}


	return 0;
}
