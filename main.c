#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max, min;

    printf("Enter three space-separated integers:\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Your input %d, %d, %d\n", a, b, c);

    max = a > b ? a : b;
    max = max > c ? max : c;

    min = (a < b) ? (a < c) ? a : c :(b < c) ? b : c;

    printf("Max number: %d\nMin number: %d\n", max, min);

    return 0;
}
