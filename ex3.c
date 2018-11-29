#include <stdio.h>
#include <stdlib.h>

void main (){
    void numMaiMen(int vet[10]);

    int i,vet[10] = {};

    printf("Insira 10 inteiros abaixo: \n");
    printf("\n");
    for(i=0; i < 10; i++){
        printf("%d: ",i+1);
        scanf("%d", &vet[i]);
    }
    numMaiMen(vet);
    printf("\n");
    system("pause");
}

void numMaiMen(int vet[10]){

    int i,maior=0,menor=0;

    for(i=0; i < 10; i++){
        if(i==0){
            maior = vet[i];
            menor = vet[i];
        }else if(vet[i] < menor){
            menor = vet[i];
        } else if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("\n");
    printf("Maior numero: %d\n",maior);
    printf("Menor numero: %d\n",menor);
}
