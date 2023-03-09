#include<stdio.h>
#include <conio.h>
int main(){

    int al, z=51, x, y, func, aluno[50];

    float nota[50];

    start:

    printf("Registro de aluno:\n\n");

    printf("Funcionalidades:\n1-Incluir Notas\n2-Zerar a Nota do aluno:\n3-Listar Alunos\n4-Pesquisar\n5-Excluir aluno\n");

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

            if(i==z){

            printf("\nALUNO EXCLUÍDO!!!!!\n");

            } else
            {


            printf("\nNúmero do Aluno:%d\n",i+1);

            printf("Nota do Aluno:%f\n", nota[i]);

            if(nota[i]>=5)

            printf("Situação: Aprovado!\n");

            else

            printf("Situação: Reprovado\n");

            }

            if(al=)
        }
        printf("\nDeseja retornar ao começo:\n1-Sim\n2-Não\n");

        scanf("%d",&y);

        if(y==1){
            system("cls");

            goto start;
        }
        else{
            goto end;
        }
    }
    if(func==4){

        for(int i=0;i<50;i++){
         printf("Selecione um aluno entre 0 e 50:");
         scanf("%d",&x);

        printf("\nNúmero do Aluno:%d\n");
        printf("Nota do Aluno:%f\n", nota[i]);

        printf("\nDeseja retornar ao começo:\n1-Sim\n2-Não\n");

        scanf("%d",&y);

        if(y==1){
            system("cls");

            goto start;
    }
      }
        }
    if(func==5)
        {
             printf("Exclua um aluno entre 1 e 50:");

             scanf("%d",&z);

             z--;

             goto start;
        }
    if(func==6)
        {

             printf("\nNúmero do novo aluno:%d\n");

             scanf("\nNú")

             printf("\nNota do novo aluno:");

             scanf("%d",&x);



             goto start;
        }

        {
                goto end;
                                 }

    end:

    return 0;
}
