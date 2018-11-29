#include <stdio.h>
#include <stdlib.h>

void main (){

    int resto,cont,j,i,vet[10] = {};

    printf("Digite 10 numeros: \n");
    printf("\n");

    for (i=0; i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &vet[i]);
        cont=0;
        for(j = 1;j <= vet[i]; j++){
            resto = vet[i] % j;
            if (resto == 0 ){
              cont++;
            }
        }
        if(cont == 2){
            printf("E primo\n");
        }else {
            printf("N e primo\n");
        }
    }
}
