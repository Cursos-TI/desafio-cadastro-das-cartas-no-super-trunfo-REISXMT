#include <stdio.h>
int main() {
    char Estado1[50];
    char Codigo_da_carta1[50];
    char Nome_cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_turisticos1;

    char Estado2[50];
    char Codigo_da_carta2[50];
    char Nome_cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_turisticos2;

    printf("DIGITE OS DADOS DA CARTA 1:\n");

    printf("ESTADO (LETRA DE A a H): ");
    scanf("%s", Estado1 );

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", Codigo_da_carta1 );

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", Nome_cidade1 );

    printf("DIGITE O NÚMERO DA POPULAÇÃO: \n");
    scanf("%d", &Populacao1 );

    printf("DIGITE A ÁREA: \n");
    scanf("%f", &Area1 );

    printf("DIGITE O PIB: \n");
    scanf("%f", &PIB1 );

    printf("DIGITE O NÚMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &Pontos_turisticos1);

    printf("DIGITE OS DADOS DA CARTA 2:\n");

    printf("ESTADO (LETRA DE A a H): ");
    scanf("%s", Estado2 );

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", Codigo_da_carta2 );

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", Nome_cidade2 );

    printf("DIGITE O NÚMERO DA POPULAÇÃO: \n");
    scanf("%d", &Populacao2 );

    printf("DIGITE A ÁREA: \n");
    scanf("%f", &Area2 );

    printf("DIGITE O PIB: \n");
    scanf("%f", &PIB2 );

    printf("DIGITE O NÚMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &Pontos_turisticos1);

    printf("CARTA 1  \n");
    printf("ESTADO: %s\n", Estado1);
    printf("CODIGO DA CARTA: %s\n", Codigo_da_carta1 );
    printf("NOME DA CIDADE: %s\n", Nome_cidade1);
    printf("A POPULAÇÃO É: %d\n", Populacao1);
    printf("A ÁREA É: %.2f km²\n", Area1);
    printf("O PIB É: %f bilhões de reais\n", PIB1);
    printf("O NÚMERO DE PONTOS TURISTICOS É: %d\n", Pontos_turisticos1);

    printf("CARTA 2  \n");
    printf("ESTADO: %s\n", Estado2);
    printf("CODIGO DA CARTA: %s\n", Codigo_da_carta2 );
    printf("NOME DA CIDADE: %s\n", Nome_cidade2);
    printf("A POPULAÇÃO É: %d\n", Populacao2);
    printf("A ÁREA É: %.2f km²\n", Area2);
    printf("O PIB É: %f bilhões de reais\n", PIB2);
    printf("O NÚMERO DE PONTOS TURISTICOS É: %d\n", Pontos_turisticos2);


    return 0;
}
