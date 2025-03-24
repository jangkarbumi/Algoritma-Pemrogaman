/*Nama File 	: FrekNilaiTabel.c*/
/*Deskripsi 	: Menampilkan nilai tabel yang frekuensinya lebih dari satu*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 13-3-2025, 9.33*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int n;
    printf("Masukkan nilai n untuk panjang larik: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan nilai larik sebanyak n: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  /*Algoritma*/
    for (int i = 0; i < n; i++) {
        int count = 1;

        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
  return 0;
}
