#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int matrizA[100][100], matrizB[100][100];
    int  matrizC[100][100];
    int i, j, k, n;
    int S1, S2, S3, S4, S5, S6, S7, S8, S9, S10;
    int P1, P2, P3, P4, P5, P6, P7;

    n=2;
    
    for (i=1; i<=n; i++){
      for (k=1; k<=n; k++){
        printf("Ingresar el valor de la fila %d y columna %d de la matriz A: ",i,k);
        scanf("%d",&matrizA[i][k]);
      }
    }
    
    for (k=1; k<=n; k++){
      for (j=1; j<=n; j++){
        printf("Ingresar el valor de la fila %d y columna %d de la matriz B: ",k,j);
        scanf("%d",&matrizB[k][j]);
      }
    }

    S1=matrizB[1][2]-matrizB[2][2];
    S2=matrizA[1][1]+matrizA[1][2];
    S3=matrizA[2][1]+matrizA[2][2];
    S4=matrizB[2][1]-matrizB[1][1];
    S5=matrizA[1][1]+matrizA[2][2];
    S6=matrizB[1][1]+matrizB[2][2];
    S7=matrizA[1][2]-matrizA[2][2];
    S8=matrizB[2][1]+matrizB[2][2];
    S9=matrizA[1][1]-matrizA[2][1];
    S10=matrizB[1][1]+matrizB[1][2];
    
    P1=matrizA[1][1]*S1;
    P2=matrizB[2][2]*S2;
    P3=matrizB[1][1]*S3;
    P4=matrizA[2][2]*S4;
    P5=S5*S6;
    P6=S7*S8;
    P7=S9*S10;
    
    matrizC[1][1]=P5+P4-P2+P6;
    matrizC[1][2]=P1+P2;
    matrizC[2][1]=P3+P4;
    matrizC[2][2]=P5+P1-P3-P7;
    
    printf("La matriz A es: \n");
    for (i=1; i<=n; i++){
      for (k=1; k<=n; k++){
        printf(" %d ", matrizA[i][k]);
      }
      printf("\n");
    }
    
    printf("La matriz B es: \n");
    for (k=1; k<=n; k++){
      for (j=1; j<=n; j++){
        printf(" %d ", matrizB[k][j]);
      }
      printf("\n");
    }
    
    printf("La matriz C, que resulta de A*B es: \n");
    for (i=1; i<=n; i++){
      for (j=1; j<=n; j++){
        printf(" %d ", matrizC[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}