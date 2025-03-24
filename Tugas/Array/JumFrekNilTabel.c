/*Nama File 	: JumFrekNilTabel.c*/
/*Deskripsi 	: Menghitung jumlah total dari nilai array yang kemunculannya lebih dari satu */
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 13-3-2025, 9.45*/

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
    int total = 0;
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
            total += arr[i] * count;
        }
    }
    printf("%d\n", total);
  return 0;
}
