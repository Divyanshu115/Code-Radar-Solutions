#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > 0 || b > 0) {
        printf("Both numbers are greater than 0\n");
    } else {
        printf("One or both numbers are not greater than 0\n");
    }

    return 0;
}
