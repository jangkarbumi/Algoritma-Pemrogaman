#include <stdio.h>

int main() {
    int T;
    printf("Masukkan panjang tabel T: ");
    scanf("%d", &T);
    int Neff;
    printf("Masukkan Neff: ");
    scanf("%d", &Neff);
    int arr[T + 1]; //index array dimulai dari 1 menurut soal
    
    printf("Masukkan isi tabel: ");
    for (int i = 1; i <= T; i++) {
        if (i <= Neff) {
            scanf("%d", &arr[i]);
        }
        else {
            arr[i] = 0;
        }
    }

    for (int i = T; i >= T - Neff; i--) {
        arr[i] = arr[i - (T - Neff)];
    }

    for (int i = 1; i <= T - Neff; i++) {
        arr[i] = 0;
    }

    //Keluaran 
    for (int i = 1; i <= T; i++) {
        printf("%d ", arr[i]);
    }
}
