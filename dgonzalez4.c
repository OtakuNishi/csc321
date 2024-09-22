#include <stdio.h>

int main() {
    int x;
    float y;
    char c;
    double d;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    printf("Enter a floating point value: ");
    scanf("%f", &y);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    if (x > 1) {
        printf("The integer variable is greater than 1.\n");
    } else {
        printf("The integer variable is less than or equal to 1.\n");
    }

    if (y < 10.5) {
        printf("The float variable is less than 10.5.\n");
    } else {
        printf("The float variable is greater than or equal to 10.5.\n");
    }

    if (c != 'a') {
        printf("The character variable does not equal the letter 'a'.\n");
    } else {
        printf("The character variable equals the letter 'a'.\n");
    }

    if (d == 3.14) {
        printf("The double variable equals 3.14.\n");
    } else {
        printf("The double variable does not equal 3.14.\n");
    }

    return 0;
}

