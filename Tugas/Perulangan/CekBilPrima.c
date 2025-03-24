/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: memeriksa apakah bilangan bulat positif N adalah bilangan prima*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.32*/

#include <stdio.h> /*header file*/


/*Program Utama*/
int main()
{ /*Kamus*/
    int prima = 1;
    int N;
    printf("Masukkan bilangan bulat lebih dari 0: ");
    scanf("%d", &N);
  /*Algoritma*/
    if (N <= 0) {
        printf("N harus lebih besar dari 0\n");
    }
    else if (N == 1) {
        printf("N bukan bilangan prima\n");
    }
    else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                prima = 0;
                break;
            }
        }
    }

    if (prima) {
        printf("N adalah bilangan prima\n");
    }
    else {
        printf("N bukan bilangan prima\n");
    }
  return 0;
}
