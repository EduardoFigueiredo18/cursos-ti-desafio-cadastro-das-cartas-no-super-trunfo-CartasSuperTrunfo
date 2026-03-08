#include <stdio.h>

int main()
{
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a Temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque. \n");
    scanf("%u", &estoque);

    if (temperatura > 30)
    {
        printf("A temperatura está alta.\n");
    }
    else
    {
        printf("A temperatura está normal.\n");
    }

    if (umidade > 50)
    {
        printf("Umidade está elevada. \n");
    }
    else
    {
        printf("Umidade está normal. \n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque abaixo do normal!\n");
    }
    else
    {
        printf("Estoque está normal!\n");
    }
}