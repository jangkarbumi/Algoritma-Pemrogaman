#include <stdio.h>
#include <stdbool.h>

const int T = 100; //di soal diketahui panjang tabel pasti 100 dan dipastikan selalu memiliki panjang sama
void CekSimetri(int arrT1[], int arrT2[]){
    bool apakahSimetri = true;

    for (int i = 0; i < T; i++) {
        if (arrT1[i] != arrT2[i]) {
            apakahSimetri = false;
            break;
        }
    }
    if (apakahSimetri) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
}

int main() {
    int arrT1[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &arrT1[i]);
    }
    int arrT2[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &arrT2[i]);
    }

    CekSimetri(arrT1, arrT2);
 }
