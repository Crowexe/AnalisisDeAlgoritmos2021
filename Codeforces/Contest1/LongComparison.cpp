#include <iostream>
#include <vector>

using namespace std;

int main() {
	int tc;
	long long int x1, x2, p1, p2;
	long long int tmp1, tmp2;
	long long int n1, n2;
	

	cin >> tc;
	  	
	for (int i = 0; i < tc; i++) {
		cin >> x1 >> p1;
		cin >> x2 >> p2;
		
		tmp1 = x1;
		tmp2 = x2;
		int z1 = 0, z2 = 0, z = 0;
		while (tmp1 > 0){
			tmp1 = tmp1/10;
			p1 = p1 + 1;
			z1 = z1 + 1;
		}

		while (tmp2 > 0){
			tmp2 = tmp2/10;
			p2 = p2 + 1;
			z2 = z2 + 1;
		}

		if(p1 > p2) {
			cout << ">" << endl;
			
		}
		else if ( p1 < p2) {
			cout << "<" << endl;
		}
		else if (p1 == p2) {
			z = z1 - z2;
			if (z < 0) z = z * -1;
			if (x1 > x2) {
				for (int i = 0; i < z; i++) {
					x2 = x2*10;
				}
				if (x1 > x2) {
					cout << ">" << endl;
				}
				else if (x1 < x2) {
					cout << "<" << endl;
				}
				else {
					cout << "=" << endl;
				}
					
			}
			else if ( x1 < x2) {
				for (int i = 0; i < z; i++) {
					x1 = x1*10;
				}
				if (x1 > x2) {
					cout << ">" << endl;
				}
				else if (x1 < x2) {
					cout << "<" << endl;
				}
				else {
					cout << "=" << endl;
				}
					
			}
			else {
				cout << "=" << endl;
			}	
		}			
	}
}