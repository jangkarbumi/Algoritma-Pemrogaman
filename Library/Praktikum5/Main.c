#include <stdio.h>
#include "MINMAX.h"

int main() {
    // Kamus Lokal
    int a, b, c;
    int *d;

    // Algoritma
    printf("================================ Inisialisasi Nilai ================================\n");
    
    a = 3;
    b = 5;
    printf("a = %d\nb = %d\n", a, b);

    printf("\n================================ MinMax Versi 1 (Fungsi Return Integer) ================================\n");
    printf("minV1(a, b) = %d\n", minV1(a, b));
    printf("maxV1(a, b) = %d\n", maxV1(a, b));

    printf("\n================================ MinMax Versi 2 (Prosedur) ================================\n");
    minV2(a, b, &c);
    printf("minV2(a, b, &c)\n");
    printf("c = %d\n", c);

    maxV2(a, b, &c);
    printf("maxV2(a, b, &c)\n");
    printf("c = %d\n", c);

    printf("\n================================ MinMax Versi 3 (Fungsi Return Address) ================================\n");
    d = maxV3(&a, &b);
    printf("d = maxV3(&a, &b);\n");
    printf("*d = %d\n", *d);
    printAddress(&a, "a");
    printAddress(&b, "b");
    printAddress(d, "d");

    d = minV3(&a, &b);
    printf("d = minV3(&a, &b);\n");
    printAddress(d, "d");

    printf("\n================================ Swap ================================\n");
    swap(&a, &b);
    printf("swap(&a, &b);\n");
    printAddress(&a, "a");
    printAddress(&b, "b");

    return 0;
}
