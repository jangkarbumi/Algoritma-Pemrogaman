#include <stdio.h>
#include "tukar2bilangan.h"

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    tukar(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}
