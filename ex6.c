#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

void main (){

    void menu(float vet[5]);
    float vet[5] = {};
    int i;

    printf("Insira 5 numeros reais: \n");
    printf("\n");

    for(i=0;i<5;i++){
       printf("%d: ",i+1);
       scanf("%f",&vet[i]);
    }

    menu(vet);

    system("pause");
}

void menu(float vet[5]){

    while(true){
        int opcao= "";
        system("cls");
        printf("***** MENU *****\n");
        printf("\n");
        printf("0 - Finalizar o programa\n");
        printf("1 - Mostrar o vetor na ordem direta\n");
        printf("2 - Mostrar o vetor na ordem inversa\n");
        printf("\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        switch(opcao){
        case 1:
            ordemDIR(vet);
            break;
        case 2:
            ordemINV(vet);
            break;
        case 0:
            sair();
            break;
        default:
            system("cls");
            printf("Opcao inexistente !!!\n");
            printf("\n");
            Sleep(1500);//espera por 1.5 seg
            break;
        }
    }
}

void ordemDIR(float vet[5]){
    int i;
    system("cls");
    for(i = 0; i < 5; i++){
        printf("%.1f\n",vet[i]);
    }system("pause");
}

void ordemINV(float vet[5]){
    int i;
    system("cls");
    for(i = 4; i >= 0; i--){
        printf("%.1f\n",vet[i]);
    }system("pause");
}

void sair(){
    char opt;
    system("cls");
    printf("***** PROGRAMA SERA FINALIZADO EM 5s *****\n");
    printf("DESEJA CONTINUAR ? (S/N): ");
    scanf("%s",&opt);

    if(opt == 'N' || opt == 'n'){
        system("cls");
        main();
    } else if (opt == 'S' || opt == 's'){
        for(int i=1;i < 6;i++){
            printf("%d...",i);
            Sleep(1000);//espera por 1.5 seg
        }system("cls");
        printf("ADEUS\n");
        Sleep(1000);
        exit(0);
    }
}
