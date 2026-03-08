#include <stdio.h>

int main()
{
    int brasil = 222;
    int argentina = 78; // população dos países
    int uruguai = 50;
    int estadosUnidos = 440;

    int latam = brasil + argentina + uruguai; // soma da população da latam

    if (estadosUnidos > latam)
    {
        printf("Estados Unidos venceu a guerra!\n"); // se os Estados Unidos tiver população maior
    }
    else
    {
        printf("Latam venceu a guerra!\n"); // se a latam tiver população maior
    }
}