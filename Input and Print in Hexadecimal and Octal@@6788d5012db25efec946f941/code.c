#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    printf("Decimal:%d\n", num);
    printf("Hexadecimal:%X\n", num);
    printf("Octal:%o\n", num);
    return 0;
}
