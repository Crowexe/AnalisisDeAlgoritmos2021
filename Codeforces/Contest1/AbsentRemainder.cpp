//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  	int tc;
  	cin >> tc;

  	for (int i = 0; i < tc; i++) {
    	int n;
   		cin >> n;
   		vector<int> a;
 		for (int i = 0; i < n; i++) {
			int x = 0;
			cin >> x;
			a.push_back(x);
		}

   		int mini = *min_element(a.begin(), a.end());

    	for (int i = 0, k = 0; k < n / 2; ++i) {

			if (a[i] != mini) {
     			cout << a[i] << ' ' << mini << '\n';
      			k += 1;
    		}
			
		}
  	}
}