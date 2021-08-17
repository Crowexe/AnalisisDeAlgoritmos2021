#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {

	int nums, v, i, j, *arr, temp;
	arr = (int *) calloc(nums, sizeof(int));

	if(arr == NULL) exit(1);

	printf("Cuantos numeros de 1 al 10000 se ordenaran?\n");
	scanf("%d", &nums);
	
	if(nums > 10000) {
		printf("Valor invalido\n");
		return 0;
	}

	if(nums < 1) {
		printf("Valor invalido\n");
		return 0;
	}

	srand(time(NULL));
	for (i=0; i<nums; i++) {
		v=rand();
		arr[i]=v;
		//printf("%d\n",arr[i]);
	}
	printf("Numeros ordenados:\n");	
	for(i=1; i<nums; i++) {
		for(j=0; j<(nums-i); j++) {
			if (arr[j] < arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
	}
	for(i=0; i<nums; i++){		
			printf("%d\n",arr[i]);
	}
	return 0;
}