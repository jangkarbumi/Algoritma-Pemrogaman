/*Nama File 	: NilaiMax2Tabel.c*/
/*Deskripsi 	: mencari nilai maksimum kedua dari tabel*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 13-3-2025, 8.59*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  /*Algoritma*/
    int max = arr[0];
    int max2 = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[0]) {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max) {
            max2 = arr[i];
        }
    }
    printf("%d", max2);
  return 0;
}
