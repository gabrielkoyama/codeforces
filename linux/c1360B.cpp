#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

bool isIn(vector <int> arr, int n)
{
	for(int i=0; i < arr.size(); i++)
		if(arr[i] == n) return true;
	return false;
}

int mmax(vector <int> arr)
{
	int m=0;
	for (int i = 0; i < arr.size(); ++i)
		if(m < arr[i]) m=arr[i];
	return m;
}

int mmin(vector <int> arr)
{
	int m=arr[0];
	for (int i = 0; i < arr.size(); ++i)
		if(m > arr[i]) m=arr[i];
	return m;
}

void printArr(std::vector<int> arr)
{	
	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";
}

void solve(int n)
{
	
}

int main()
{
	int n;
	cin >> n;
	cout << "\n\n";

	// solve(n);
	int nArr;
	vector <int> ans;
	while(n--)
	{
		cin >> nArr;
		vector <int> arr;
		for (int i = 0; i < nArr; ++i)
		{	
			int el;
			cin >> el;
			arr.push_back (el);

			// if(i == nArr-1) {
			// 	printArr(arr);
			// 	cout << "\n\n";
			// }

			if(i == nArr-1){
				for(int idx = 0; idx < arr.size(); idx++)
				{
					vector <int> a, b;
					for(int j=0; j < arr.size(); j++)
					{
						b = arr;
						int current = b[idx];

						a.push_back (current);
						b.erase (b.begin() + idx);
						
						a.push_back (b[j]);

						ans.push_back(abs(mmax(a) - mmin(b)));
					}
				}

				cout << "mmin(ans)" << endl;
			}
		}
	}
	return 0;
}




/*
		|max(𝐴)−min(𝐵)| is as small as possible

		in  7 3 9 1 
		out 2
	
		A = 1 3 9
		B = 7

		test case:

		A = 7
		B = 3 9 1  out = 6

		A = 7 3
		B = 9 1  out = 6

		A = 7 3 9 
		B = 1  out = 8

		A = 3
		B = 7 9 1  out = 2

	*/