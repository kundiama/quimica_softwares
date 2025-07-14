#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

 int main()
{
    setlocale(LC_ALL,"Portuguese");
	int Z, A, P, N, C, j, op ,prot1 ,prot2 ,neut1,neut2;

    printf("\t===================Projecto de TLP====================\t\n");
	printf("==========================\n");
	printf("Nome: Elias Manuel\n");
	printf("Turma: GSI10AM\nNº14\n");
    do{
        printf("*==========================*\n");
        printf("Escolha uma opção: \n");
        printf("1 - Semelhança atómica\n");
        printf("2 - Calcular particulas\n");
        printf("3 - Sair\n");
        scanf("%d",&op);
        printf("================================\n");

        switch(op){
            case 1:
            printf("Insira o número de protões do 1º elemento: ");
            scanf("%d",&prot1);
            printf("Insira o número de neutrões do 1º elemento:");
            scanf("%d",&neut1);
            printf("Insira o número de protões do 2º elemento: ");
            scanf("%d",&prot2);
            printf("Insira o número de neutrões do 2º elemento:");
            scanf("%d",&neut2);
            printf("\n");
            if (prot1==prot2 && neut1!=neut2){

                printf("R:Os elementos são Isótopos.\n");
            }else if (prot1!=prot2 && neut1==neut2){
                printf("\n");
                printf("R:Os elementos são Isótonos.\n");
            }else if ((prot1+neut1)==(prot2+neut2)){
                printf("\n");
                printf("R:Os elementos são Isóbaros.\n");
            }else{
                printf("\n");
                printf("R:Os elementos não são Isótopos, Isótonos nem Isóbaros!\n");
            }
            break;

            case 2:
            printf("Digite o número de atómico (Z):");
            scanf("%d",&Z);
            printf("Digite o número de massa (A):");
            scanf("%d",&A);
            printf("Digite a carga do átomo (C):");
            scanf("%d",&C);

            P = Z ;
            N = A - Z;
            j = Z - C;
            printf("\n");
            printf("Número de protões:%d\n",P);
            printf("Número de neutrões:%d\n",N);
            printf("Número de eletrões:%d \n",j);
            break;
            case 3:
            printf("Programa encerrado!\n");
            break;
            default:
            printf("Opção inválida!\n");
        }
        printf("\n");
    }	while(op!=3);
        return 0;
}
