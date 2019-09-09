#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    int item = 1, quantidade = 0,fim = 1,novoitem = 1,quantidadetotal = 0;
    float valortotal = 0,desconto = 0,valordesconto = 0;

    system("color F0");
    setlocale(LC_ALL,"portuguese");

    while(fim != 0){
    printf("----------------------------------- MENU ------------------------------------                                \n");
    printf("    Especificação                  Código                           Preço                                    \n");
    printf("\n   Cachorro quente                  100                            R$ 1.20                                 \n");
    printf("\n   Bauru simples                    101                            R$ 1.30                                 \n");
    printf("\n   Bauru com ovo                    102                            R$ 1.50       Pedidos a mais de:        \n");
    printf("\n   Hamburguer                       103                            R$ 1.20        R$ 10,00 desconto de 10 porcento  \n");
    printf("\n   Cheeseburguer                    104                            R$ 1.70        R$ 20,00 desconto de 20 porcento \n");
    printf("\n   Suco                             105                            R$ 2.20        R$ 30,00 desconto de 30 porcento \n");
    printf("\n   Refrigerante                     106                            R$ 1.00                                 \n");
    printf("\n   Terminar pedido                   1                             *******                                 \n");
    printf("-----------------------------------------------------------------------------                                \n");

    printf("Qual o codigo do seu pedido?\n");
    scanf("%d",&item);

        quantidadetotal += quantidade;

        if (valortotal >= 30){
            desconto= (valortotal *0.3);
        }
        else if (valortotal >= 20){
            desconto= (valortotal*0.2);
        }
        else if (valortotal >= 10){
            desconto= (valortotal*0.1);
        }
        valordesconto = valortotal - desconto;


    if(item == 1){
         fim = 0;
         system("cls");
    if (valordesconto>= 10){
            printf("Seu pedido de %d itens ficou em R$ %.2f com o desconto de %.2f Reais . \n",quantidadetotal,valortotal,desconto);
            printf("Valor com desconto %.2f reais.\n",valordesconto);

            printf("\nAgradecemos sua preferência\n");
    }else {printf("\nSeu pedido de %d itens ficou em R$ %.2f \n",quantidadetotal,valortotal);
           printf("\nAgradecemos sua preferência\n");}

            printf("\nDeseja fazer um  novo pedido digite 1 para sim  e 2 para nao.\n");
            scanf("%d",&novoitem);


            if (novoitem ==1)
            {
                fim = 1;
                item = 1;
                valortotal=0;
                quantidade=0;
                quantidadetotal=0;
                desconto=0;
                system("cls");

            }else {

            (novoitem ==2 );
                system("cls");
            }


    }else{
        printf("Qual a quantidade?\n");
        scanf("%d",&quantidade);
         system("cls");

    if( item == 100)
        {
            valortotal += 1.2 * quantidade;
        }
        else if (item == 101)
        {
            valortotal += 1.3 * quantidade;
        }
        else if (item == 102)
        {
            valortotal += 1.5 * quantidade;
        }
        else if (item == 103)
        {
            valortotal += 1.2 * quantidade;
        }
        else if (item == 104)
        {
            valortotal += 1.7 * quantidade;
        }
        else if (item == 105)
        {
            valortotal += 2.2 * quantidade;
        }
        else if (item == 106)
        {
            valortotal += 1.0 * quantidade;}


    }


    }
    return 0;

}
