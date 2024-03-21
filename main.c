#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    int number;
    scanf("%c", &character);
    scanf("%d", &number);

    printf("numero correspondente: %d\n", character);
    printf("caracter correspondente: %c\n", number);
    printf("octal: %o\n", number);
    printf("hexadecimal: %x\n", number);

    return 0;
}
