//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>


/*  
	1 2 3 4 5 6 7
	x y
*/  

using namespace std;

int main () {

	int tc;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		vector<long long int> a;
		vector<long long int> b;
		for (int i = 0; i < 7; i++) {
			int x = 0;
			cin >> x;
			b.push_back(x);
		}					
		a.push_back(b[0]);
		for (int j = 1; j < 6; j++) {
			int f = b[0];
			int s = b[j];
			for (int k = 2; k < 7; k++) {
				int t = b[k];
				int ans = f + s + t;
				if (ans == b[b.size() - 1]) {
					a.push_back(s);
					a.push_back(t);
				}
			}
		}
		for (int j = 0; j < 3; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
	
}