#include <stdio.h>

int main() {
    
    int populacao1;
    int populacao2;
    int area1;
    int area2;
    int pib1;
    int pib2;
    int pturis1;
    int pturis2;
    char nomestado1[20];
    char nomecity1[20];
    char nomestado2[20];
    char nomecity2[20];
    char codigoestado01[20];
    char codigoestado02[20];
    char inicial;
    float altura;

    
    printf("Vamos cadastrar os dados de duas cartas para o jogo SUPER TRUNFO\n");
    printf("Insira os dados da primeira carta:\n");
    printf("Digite o 1º estado:");
    scanf("%s", nomestado1);    

    printf("Digite o Código do 1º estado:");
    scanf("%s", codigoestado01);

    printf("Digite o nome da cidade:");
    scanf("%s", nomecity1);

    printf("Digite a população da 1ª cidade:");
    scanf("%d", &populacao1);
    
    printf("Digite a área:");
    scanf("%d", &area1);

    printf("Digite o PIB:");
    scanf("%d", &pib1);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturis1);

    printf("Carta 1:\n");
    printf("Estado: %s\n", nomestado1);
    printf("Código: %s\n", codigoestado01);
    printf("Cidade: %s\n", nomecity1);
    printf("População: %d\n", populacao1);
    printf("Área: %d\n", area1);
    printf("PIB: %d\n", pib1);
    printf("Pontos turisticos: %d\n", pturis1);

    printf("Insira os dados da segunda carta:\n");
    
    printf("Digite o 2º estado:");
    scanf("%s", nomestado2); 

    printf("Digite o Código do 2º estado:");
    scanf("%s", codigoestado02);

    printf("Digite o nome da cidade:");
    scanf("%s", nomecity2);

    printf("Digite a população da 2ª cidade:");
    scanf("%d", &populacao2);
    
    printf("Digite a área:");
    scanf("%d", &area2);

    printf("Digite o PIB:");
    scanf("%d", &pib2);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturis2);

    printf("Carta 2:\n");
    printf("Estado: %s\n", nomestado2);
    printf("Código: %s\n", codigoestado02);
    printf("Cidade: %s\n", nomecity2);
    printf("População: %d\n", populacao2);
    printf("Área: %d\n", area2);
    printf("PIB: %d\n", pib2);
    printf("Pontos turisticos: %d\n", pturis2);
    

    return 0;
}
