#include <stdio.h>
#include <stdlib.h>

int maximo (int num1, int num2) {
    int result;
    if(num1>num2){
        result = num1;
    } else{
        result = num2;
    }
}


int main(void) {
	int r[1001], p[1000];
	int n,q;

	printf("\nIngrese la longitud inches: ");
	scanf("%d",&n);
	
	for(int i = 1; i<=n; i++){
		printf("\nIngrese el precio de la longitud %d: ",i);
		scanf("%d",&p[i]);
	}
	
	r[0]=0;
	
	for (int j = 1; j<=n; j++) {
		q = -2147483646;
		for (int i = 1; i <= j; i++){
			q = maximo (q,(p[i]+r[j-i]));
		}
		r[j] = q;
	}
	
	printf("\nEl mayor precio a obtener es: %d", r[n]);
	return 0;
}

