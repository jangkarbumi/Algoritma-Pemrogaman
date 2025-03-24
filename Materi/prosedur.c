// Berikut implementasi prosedur pada diktat halaman 78-79 dengan menggunakan pointer.
#include <stdio.h>

void Tukarkan(int* iX, int* iY) {
    int temp;
    temp = *iX;
    *iX = *iY;
    *iY = temp;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    Tukarkan(&A, &B);
    printf("%d %d", A, B);
}
