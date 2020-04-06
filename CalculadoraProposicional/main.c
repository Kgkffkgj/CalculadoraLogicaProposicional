#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char p[100];
    char q[100];
    int pVF;
    int qVF;
    char sitfinal;
    int op;
    char voltar;

while(1){
        system("cls");

    printf("-------------Menu-------------\n");
    printf("|           1. ~ p           |\n");
    printf("|           2. ~ q           |\n");
    printf("|           3. p ^ q         |\n");
    printf("|           4. p v q         |\n");
    printf("|           5. p v- q        |\n");
    printf("|           6. p -> q        |\n");
    printf("|           7. p <-> q       |\n");
    printf("|           8. Sair.         |\n");
    printf("------------------------------\n");

   scanf(" %d", &op);
system("cls");
   switch(op){
    case 1:
        printf("Digite a frase quivalente a p: \n");
            scanf(" %s", &p);
            system("cls");
        printf("Ela é verdadeira? 0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);
        system("cls");

    if(pVF == 1)
    {
         printf("----------------**----------------\n");
        printf("A situação do inverso de p é: Falsa\n");
        printf("-----------------**----------------\n");
    }
    else if(pVF == 0)
    {
        printf("-------------------**-------------------\n");
        printf("A situação do inverso de p é: Verdadeira\n");
        printf("-------------------**-------------------\n");
    }
    else{
        printf("------**------\n");
        printf("Opção invalida\n");
        printf("------**------\n");
    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
        if(voltar == ""){

        }



        break;
    case 2:
         printf("Digite a frase quivalente a q: \n");
            scanf(" %s", &p);
            system("cls");
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);
        system("cls");

    if(pVF == 1)
    {
         printf("----------------**----------------\n");
        printf("A situação do inverso de q é: Falsa\n");
        printf("-----------------**----------------\n");
    }
    else if(pVF == 0)
    {
       printf("-------------------**--------------------\n");
        printf("A situação do inverso de q é: Verdadeira\n");
        printf("-------------------**-------------------\n");
    }
    else{
        printf("------**------\n");
        printf("Opção invalida\n");
        printf("------**------\n");
    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
        if(voltar == ""){

        }




        break;
    case 3:
        printf("Digite a frase equivalente a p: \n");
            scanf("%s", &p);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);


        printf("Digite a frase equivalente a q: \n");
            scanf("%s", &q);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &qVF);


    if((pVF == 1) && (qVF == 1))
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("%s",p);
        printf(" e ");
        printf("%s",q);
        printf(", é: Verdadeira\n");
        printf("---------------**---------------\n");
    }
    else
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("%s",p);
        printf(" e ");
        printf("%s",q);
        printf(", é: Falsa\n");
        printf("---------------**---------------\n");

    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
    if(voltar == ""){

    }

        break;
    case 4:
     printf("Digite a frase equivalente a p: \n");
            scanf("%s", &p);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);


        printf("Digite a frase equivalente a q: \n");
            scanf("%s", &q);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &qVF);


    if((pVF == 0) && (qVF == 0))
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("%s",p);
        printf(" e ");
        printf("%s",q);
        printf(", é: Falsa\n");
        printf("---------------**---------------\n");
    }
    else
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("%s",p);
        printf(" ou ");
        printf("%s",q);
        printf(", é: Verdadeira\n");
        printf("---------------**---------------\n");

    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
    if(voltar == ""){

    }
        break;
    case 5:
    printf("Digite a frase equivalente a p: \n");
            scanf("%s", &p);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);


        printf("Digite a frase equivalente a q: \n");
            scanf("%s", &q);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &qVF);


    if(((pVF == 1) && (qVF == 1)) || ((pVF == 0) && (qVF == 0)))
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("Ou ");
        printf("%s",p);
        printf(" ou ");
        printf("%s",q);
        printf(", é: Falsa\n");
        printf("---------------**---------------\n");
    }
    else
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("Ou ");
        printf("%s",p);
        printf(" ou ");
        printf("%s",q);
        printf(", é: Verdadeira\n");
        printf("---------------**---------------\n");

    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
    if(voltar == ""){

    }
        break;
    case 6:

    printf("Digite a frase equivalente a p: \n");
            scanf("%s", &p);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);


        printf("Digite a frase equivalente a q: \n");
            scanf("%s", &q);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &qVF);


    if((pVF == 1) && (qVF == 0))
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("Se ");
        printf("%s",p);
        printf(" então ");
        printf("%s",q);
        printf(", é: Falsa\n");
        printf("---------------**---------------\n");
    }
    else
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("Se ");
        printf("%s",p);
        printf(" então ");
        printf("%s",q);
        printf(", é: Verdadeira\n");
        printf("---------------**---------------\n");

    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
    if(voltar == ""){

    }
        break;
    case 7:


    printf("Digite a frase equivalente a p: \n");
            scanf("%s", &p);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &pVF);


        printf("Digite a frase equivalente a q: \n");
            scanf("%s", &q);
        printf("0 - Falso / 1 - Verdadeiro \n");
            scanf("%d", &qVF);


    if(((pVF == 1) && (qVF == 1)) || ((pVF == 0) && (qVF == 0)))
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("Se ");
        printf("%s",p);
        printf(" então ");
        printf("%s",q);
        printf(", é: Verdadeira\n");
        printf("---------------**---------------\n");
    }
    else
    {
        printf("---------------**---------------\n");
        printf("A frase: ");
        printf("%s",p);
        printf(" se, somente se ");
        printf("%s",q);
        printf(", é: Falsa\n");
        printf("---------------**---------------\n");

    }
    printf(" \n");
    printf("Digite qualquer tecla e pressione ENTER para voltar: \n");
        scanf("%s", &voltar);
    if(voltar == ""){

    }
        break;
    case 8:

        exit(0);
        break;

    default:
        system("cls");
        printf("Opção Invalida! \n");


   }
}


    /*printf("Digite a primeira frase: \n");
    scanf("%s", &p);
    printf("Ela é verdadeira? \n");
    scanf("%d", &pVF);


    printf("Digite a segunda frase: \n");
    scanf("%s", &q);
     printf("Ela é verdadeira? \n");
    scanf("%d", &qVF);*/


}
