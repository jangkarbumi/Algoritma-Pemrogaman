#include <stdio.h>

int main() {
    int s, p;
    scanf ("%d %d", &s, &p);

    if (s == 0 || p == 0) {
        printf("S atau P harus bernilai lebih dari 0\n");
        return 0;
    }

    if (p > s) {
        printf("P harus kurang dari sama dengan 0\n");
        return 0;
    }

    int iterasi = 0;
    while (p != 0 || s != 0) {
        iterasi++;

        if (p % 2 == 0) {
            s -= 1;
            p -= 2;
        }
        else {
            s -= 2;
            p -= 2;
        }
    }

    printf("Iterasi dilakukan sebanyak: %d kali", iterasi);
    return 0;
}
