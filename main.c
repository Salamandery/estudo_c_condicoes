/******************************************************************************
\nTambém, foi desenvolvida uma página especial para o show, \nmas só será permitida a compra do ingresso para maiores de 18 anos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    int MIN_YEAR_OLD = 18;
    printf("PROGRAMA QUE VERIFICA A IDADE DA PESSOA");
    printf("\nCASO SEJA DE IDADE DE 18 OU MAIS");
    printf("\nSERÁ POSSÍVEL COMPRAR O INGRESSO PARA O EVENTO\n\n");
    printf("Insira sua idade:\n");
    scanf("%d", &idade);
    
    if (idade < MIN_YEAR_OLD) 
    {
        printf("Entrada Não Permitida");
    } 
    else 
    {
        printf("Entrada Permitida, \nVocê é autorizado a comprar o ingresso");
    }

    return 0;
}