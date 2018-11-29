#include <stdio.h>
#include <stdlib.h>

void main (){

    void calcMedia(int nota[15]);
    int i,nota[15] ={};

    for(i=0; i < 15; i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%d",&nota[i]);
    }

    calcMedia(nota);

    system("pause");
}

void calcMedia(int nota[15]){

    int i,media,soma=0;

    for(i=0; i < 15; i++){

        soma = soma + nota[i];

        media = soma / 3;
    }

    printf("A media geral e: %d\n",media);

}
