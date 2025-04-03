#include <stdio.h>
#include <stdbool.h>

int main() {
    int T1[] = {1, 2 ,4};
    int T2[] = {1, 2, 4};

    int M = sizeof(T1) / sizeof(T1[0]); //Pemanggilan fungsi NbElmt untuk menghitung jumlah elemen array T1
    int N = sizeof(T2) / sizeof(T2[0]); //Pemanggilan fungsi NbElmt untuk menghitung jumlah elemen array T2

    if (M != N) {
        printf("FALSE\n");
    }

    bool ok = true;
    for (int i = 0; i < M; i++) {
        if (T1[i] != T2[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
}
