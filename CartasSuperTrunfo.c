#include <stdio.h>

int main() {
    
    int populacao1;
    int populacao2;
    char nomestado1[20];
    char nomecity1[20];
    char nomestado2[20];
    char nomecity2[20];
    char inicial;
    float altura;

    
    printf("Vamos cadastrar os dados de duas cartas para o jogo SUPER TRUNFO\n");
    printf("Digite o 1º estado:");
    scanf("%s", nomestado1);    

    printf("Digite o código da 1º carta:");
    scanf(" %c", &inicial);

    printf("Digite o nome da cidade:");
    scanf("%s", nomecity1);

    return 0;
}
