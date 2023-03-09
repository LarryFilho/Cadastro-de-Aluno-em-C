#include<stdio.h>
#include <conio.h>
int main(){

    int x, y, func, aluno[50];

    float nota[50];

    start:

    printf("Registro de aluno:\n\n");

    printf("Funcionalidades:\n1-Incluir Notas\n2-Excluir Notas\n3-Listar Alunos\n");

    scanf("%d",&func);

    system("cls");

    if(func==1){
        printf("Selecione um aluno entre 0 e 50:");

        scanf("%d",&x);

        printf("\nInsira uma nota:");

        scanf("%f",&nota[x-1]);

        system("cls");

        goto start;
    }
    if(func==2){
        printf("Selecione um aluno entre 0 e 50:");

        scanf("%d",&x);

        nota[x-1] = 0;

        system("cls");

        goto start;
    }
    if(func==3){
        printf("Lista de Alunos:");

        for(int i=0;i<50;i++){

            printf("\nNúmero do Aluno:%d\n",i+1);

            printf("Nota do Aluno:%f\n", nota[i]);

        }
        printf("\nDeseja retornar ao começo:\n1-Sim\n2-Não\n");

        scanf("%d",&y);

        if(y==1){
            system("cls");

            goto start;
        }

        goto end;
    }

    end:

    return 0;
}

