#include <stdio.h>
#include <stdlib.h>

void main (){
    void trocaValor(int vet[10]);
    int i,vet[10] = {};

    printf("Insira 10 numeros: \n");
    printf("\n");

    for(i=0;i<10;i++){
       printf("%d: ",i+1);
       scanf("%d",&vet[i]);
    }
    trocaValor(vet);
    printf("\n");
    system("pause");
}

void trocaValor(int vet[10]){
    system("cls");
    for(int i=0;i<10;i++){
        if(vet[i] < 0){
            vet[i] = 0;
            printf("Valor negativo na var vet[%d], alterado para %d\n",i,vet[i]);
        } else if (vet[i] >= 0){
            printf("Valor na var vet[%d]: %d\n",i,vet[i]);
        }
    }
}
