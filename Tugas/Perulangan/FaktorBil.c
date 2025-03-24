/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: menghitung faktor bilangan N*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.28*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;
    printf("Masukkan bilangan bulat lebih dari nol: ");
    scanf("%d", &N);
  /*Algoritma*/
    if (N <= 0) {
        printf("Bilangan N harus lebih besar dari 0");
    }
    else {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
            }
        }
    }
  return 0;
}
