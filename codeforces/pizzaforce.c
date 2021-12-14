#include<stdio.h>

    long long int resolver(long long int n) {
        if(n % 6 == 0) return n/6 * 15;
        if(n % 8 == 0) return n/8 * 20;
        if(n % 10 == 0) return n/10 * 25;
        long long int a;
		a = (n/2)*5;

			while(a%(5/2) != 0) {
				a = a + 1;
			}

        return a;
    }


    int main() {
        long long int t = 0;
        long long int n = 0;
        long long int i = 0;
        scanf("%d", &t);
        for(i = 0; i < t; i++) {
            scanf("%lld", &n);
            printf("%lld\n", resolver(n));
        }
        return 0;
    }