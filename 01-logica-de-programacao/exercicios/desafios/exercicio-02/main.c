#include <stdio.h>

int main(int argc, char const *argv[])
{
    double nota1 = 10.0;
    double nota2 = 15.0;

    double media = (nota1 + nota2) / 2.0;

    printf("A média das notas %.1f e %.1f foi de %.1f!\n", nota1, nota2, media);
    return 0;
}
