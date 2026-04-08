#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 3;

    if (num % 2 == 0) {
        printf("O número %d é par!\n", num);
    } else {
        printf("O número %d é ímpar\n", num);
    };

    return 0;
}
