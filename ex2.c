#include <stdio.h>
#include <stdlib.h>

void main (){
    void numPar(int vet[10]);

    int i,vet[10];

    printf("Insira 10 numeros para verificar quantos sao numeros pares\n");
    printf("\n");
    for(i=0; i < 10; i++){
        printf("%d: ",i+1);
        scanf("%d",&vet[i]);
    }

    numPar(vet);

    system("pause");
}

void numPar(int vet[10]){

    int i,result,cont=0;

    for(i=0; i < 10; i++){
        result = vet[i] % 2;
        if (result == 0){
            cont++;
        }
    }
    printf("\nQtd numeros pares: %d\n",cont);
}
