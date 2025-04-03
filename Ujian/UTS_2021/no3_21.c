#include <stdio.h>
#include <stdlib.h>

void SplitArray(int T[], int sizeT, int T1[], int *sizeT1, int T2[], int *sizeT2) {
    if (sizeT % 2 == 0) {
        *sizeT1 = sizeT / 2;
        *sizeT2 = sizeT / 2;
    }   
    else {
        *sizeT1 = (sizeT / 2) + 1;
        *sizeT2 = sizeT / 2;
    }

    int isiT1 = 0, isiT2 = 0;
    for (int i = 0; i < sizeT; i++) {
        if (i < *sizeT1) {
            T1[isiT1] = T[i];
            isiT1++; 
        }
        else {
            T2[isiT2] = T[i];
            isiT2++;
        }
    }
}


//Contoh penggunaaan seperti pada soal
int main() {
    int T[] = {1, 2, 3, 2, 1};
    int sizeT = sizeof(T) / sizeof(T[0]);

    int T1[sizeT], T2[sizeT];
    int sizeT1, sizeT2;

    SplitArray(T, sizeT, T1, &sizeT1, T2, &sizeT2);

    printf("T1: ");
    for (int i = 0; i < sizeT1; i++) {
        printf("%d ", T1[i]);
    }

    printf("\nT2: ");
    for (int i = 0; i < sizeT2; i++) {
        printf("%d ", T2[i]);
    }

}
