#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    
    printf("%d mais %d resulta em %d\n", num1, num2, num1 + num2);
    printf("%d menos %d resulta em %d\n", num1, num2, num1 - num2);
    printf("%d multiplicado por %d resulta em %d\n", num1, num2, num1 * num2);
    printf("%d dividido por %d resulta em %d\n", num1, num2, num1 / num2);

    return 0;
}
