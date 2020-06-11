#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm> 
using namespace std;

void test()
{
	vector <int> arr;

	arr.push_back (2);
	arr.push_back (5);
	arr.push_back (3);
	arr.push_back (8);

	cout << arr[2] << endl;
	arr.erase (arr.begin() + 2);
	cout << arr[2] << endl;

}

void test2(){
	cout << abs(3-4) << endl;
}

int max(vector <int> arr){
	return 2;
}

void test3(){
	vector <int> arr;

	arr.push_back (2);
	arr.push_back (5);
	arr.push_back (3);
	arr.push_back (8);

	cout << max(arr) << endl;
}

int main(){
	test3();
	return 0;
}