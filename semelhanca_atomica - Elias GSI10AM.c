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
	printf("Turma: GSI10AM\nN�14\n");
    do{
        printf("*==========================*\n");
        printf("Escolha uma op��o: \n");
        printf("1 - Semelhan�a at�mica\n");
        printf("2 - Calcular particulas\n");
        printf("3 - Sair\n");
        scanf("%d",&op);
        printf("================================\n");

        switch(op){
            case 1:
            printf("Insira o n�mero de prot�es do 1� elemento: ");
            scanf("%d",&prot1);
            printf("Insira o n�mero de neutr�es do 1� elemento:");
            scanf("%d",&neut1);
            printf("Insira o n�mero de prot�es do 2� elemento: ");
            scanf("%d",&prot2);
            printf("Insira o n�mero de neutr�es do 2� elemento:");
            scanf("%d",&neut2);
            printf("\n");
            if (prot1==prot2 && neut1!=neut2){

                printf("R:Os elementos s�o Is�topos.\n");
            }else if (prot1!=prot2 && neut1==neut2){
                printf("\n");
                printf("R:Os elementos s�o Is�tonos.\n");
            }else if ((prot1+neut1)==(prot2+neut2)){
                printf("\n");
                printf("R:Os elementos s�o Is�baros.\n");
            }else{
                printf("\n");
                printf("R:Os elementos n�o s�o Is�topos, Is�tonos nem Is�baros!\n");
            }
            break;

            case 2:
            printf("Digite o n�mero de at�mico (Z):");
            scanf("%d",&Z);
            printf("Digite o n�mero de massa (A):");
            scanf("%d",&A);
            printf("Digite a carga do �tomo (C):");
            scanf("%d",&C);

            P = Z ;
            N = A - Z;
            j = Z - C;
            printf("\n");
            printf("N�mero de prot�es:%d\n",P);
            printf("N�mero de neutr�es:%d\n",N);
            printf("N�mero de eletr�es:%d \n",j);
            break;
            case 3:
            printf("Programa encerrado!\n");
            break;
            default:
            printf("Op��o inv�lida!\n");
        }
        printf("\n");
    }	while(op!=3);
        return 0;
}
