#include <stdio.h>

main()
{

    char nome [30];
    float peso, altura, imc;
    printf("Qual é o seu nome: ");
    scanf("%s", &nome);
    printf("Qual o seu peso: ");
    scanf("%f", &peso);
    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%s O seu imc é %.2f", nome, imc);

}
