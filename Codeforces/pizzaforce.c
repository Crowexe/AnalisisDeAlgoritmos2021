#include<stdio.h>

    long long int resolver(long long int n) {
        if(n % 1 == 0) n = n + 1;
        long long int a;
		a = (n/2)*5;

			while(a%(5/2) != 0) {
				a = a + 1;
			}

        return a;
    }


    int main() {
        int tc = 0;
        long long int n = 0;

        scanf("%d", &t);

		for(int i = 0; i < tc; i++) {

			scanf("%lld", &n);
			printf("%lld\n", resolver(n));

		}

		return 0;
    }