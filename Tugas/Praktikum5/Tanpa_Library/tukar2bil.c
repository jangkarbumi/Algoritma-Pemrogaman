#include <stdio.h>

void tukar(int* a, int* b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    tukar(&a, &b);

    printf("%d %d", a, b);
}
