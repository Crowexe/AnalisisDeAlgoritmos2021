//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
     
int main() {
	int tc;
	cin >> tc;
	for(int i = 0; i < tc; ++i) {
		int n;
		cin >> n;
		for(int j = 0; j < n; ++j) {
			cout << j + 2 << " ";
		}
		cout << endl;
	}
}