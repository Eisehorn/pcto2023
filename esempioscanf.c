#include <stdio.h>

int main()
{
    char x = 'a';
    char y = 'b';
    int num = 42;

    printf("x era: %c\n", x);
    printf("y era: %c\n", y);
    printf("num era: %d\n", num);
    printf("inserisci due caratteri e un intero\n");
    scanf("%c %c %d", &x, &y, &num);
    printf("x è diventato: %c\n", x);
    printf("y è diventato: %c\n", y);
    printf("num è diventato: %d\n", num);
}