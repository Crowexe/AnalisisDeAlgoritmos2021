#include<stdio.h>	

int main() {
	int tc = 0;
	scanf("%d", &tc);

	for(int i = 0; i < tc; i++) {

		long long int n;	
		long long int ans;	

		scanf("%lld", &n);

		if(n % 2 != 0) {
			n = n + 1;
		}		

		if ((n + 1) >= 6) {
			ans = (n / 2) * 5;
			printf("%lld\n", ans);
		}
		else {
			ans = (6 / 2) * 5;
			printf("%lld\n", ans);
		}		
	}
	return 0;
}