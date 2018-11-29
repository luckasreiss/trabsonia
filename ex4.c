#include <stdio.h>
#include <stdlib.h>

void main (){
    void posicMaior(int vet[10]);
    int i,vet[10] = {};

    printf("Insira 10 inteiros abaixo: \n");
    printf("\n");
    for(i=0; i < 10; i++){
        printf("%d: ",i+1);
        scanf("%d", &vet[i]);
    }

    posicMaior(vet);

    system("pause");
}

void posicMaior(int vet[10]){

    int i,posic=0,maior;
    for(i=0; i < 10; i++){
        if(i == 0){
            maior=vet[i];
        } else if (vet[i] > maior){
            posic = i;
            maior = vet[i];
        }
    }
    printf("\n");
    printf("O maior numero eh %d e esta na posicao %d do vetor.\n", maior, posic+1);
}
