#include <stdio.h>
#include <stdlib.h>

void main (){
    void soma(int A[6]);
    void imprime(int A[6]);

    int A[6] = {1, 0, 5, -2, -5, 7};

    soma(A);
    imprime(A);


}

void soma(int A[6]){

    int soma = A[0] + A[1] + A[5];

    printf("Soma de A[0] + A[1] + A[5] eh: %d\n",soma);

     A[3] = 100;

}

void imprime(int A[6]){

    for(int i=0; i < 6; i++){
        printf("Valor de A[%d] eh: %d\n",i,A[i]);
    }

}
