//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int n, k, A, B;

long long int casiMerg(vector<long long int>& targets, long long int l, long long int r) {

	int x_l = lower_bound(targets.begin(), targets.end(), l) - targets.begin();
	int x_r = upper_bound(targets.begin(), targets.end(), r) - targets.begin();
	x_r --;
	int tarCant = x_r - x_l + 1;
	if (tarCant == 0) return A;
	else {
		long long int tmp = B * tarCant * (r - l + 1);
		if( l == r ) return tmp;
		long long int mid = (l + r)/2;
		return min(tmp, casiMerg(targets, l, mid) + casiMerg(targets, mid + 1, r));
	}

}

int main () { 
	vector<long long int> targets;
	cin >> n >> k >> A >> B;
	targets.resize(k);
	for (int i = 0; i < k; i++) {
		cin >> targets[i];
	}
	sort(targets.begin(),targets.end());
	cout << casiMerg(targets, 1, 1ll << n) << endl;
}