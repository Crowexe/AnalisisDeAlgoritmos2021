#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long int a, b, c;
	long long int x;

	cin >> a >> b >> c;
  	
	if(a > b) {
		x = b + b + 1 + c*2;
	}
	else if ( a < b) {
		x = a + a + 1 + c*2;
	}
	else {
		x = a + b + c*2;
	}

	cout << x << endl;
}


