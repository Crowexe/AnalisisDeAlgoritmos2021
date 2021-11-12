#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 /* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}
 
void divide(int arrNum[], int *arrPro, int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int i, max=l;
		for(i=l; i<r; i++)
		{
			if(arrNum[i+1]>arrNum[max])
				max = i+1;
		}
		
		for(i=l; i<max; i++)
			arrPro[i] = arrPro[i] +1;
		
		for(i=max+1; i<r+1; i++)
			arrPro[i] = arrPro[i] +1;
		
		//printArray(arrNum, (r-l)+1);
		//printArray(arrPro, (r-l)+1);
 
		
		// Sort first and second halves
		divide(arrNum, arrPro, l, max - 1);
		divide(arrNum, arrPro, max + 1, r);
		
		//unite(arr, arrPro, l, max, r);
	}
}
 
int* arreglo(int len)
{
	int intTest[len];
	int i,j;
	int *arrPro;
	for(j= 0; j<len; j++){
		scanf("%d", &intTest[j]);
	}
	
	arrPro = (int *) calloc( len,sizeof(int) );
	for(i = 0; i<len; i++)
		arrPro[i] = 0;
	
	divide(intTest, arrPro, 0, len - 1);
	return arrPro;
}
 
int main()	{
	int i,j, numtest;
	scanf("%d", &numtest);
	int lentest[numtest];
	
	int **arrPro;
	arrPro = (int **) calloc( numtest,sizeof(int *) );
	for(i = 0; i<numtest; i++)
		arrPro[i] = (int *)calloc ( 100 , sizeof(int) );
		
	int *arrProN;
	
	for(i= 0; i<numtest; i++){
		scanf("%d", &lentest[i]);
		arrProN = arreglo(lentest[i]);
		
		for(j = 0; j<lentest[i]; j++)
		{
			arrPro[i][j] = arrProN[j];
		}
	}
	
	for(i= 0; i<numtest; i++){
		for(j = 0; j<lentest[i]; j++)
		{
			printf("%d ",arrPro[i][j]);
		}
		printf("\n");
	}
}