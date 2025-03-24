/*Nama File 	: Jumderet.c*/
/*Deskripsi 	: menghitung jumlah deret sampai ke N*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.23*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int hasil = 0;
    int N;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &N);
  /*Algoritma*/
    if (N <= 0) {
        printf("Bilangan harus lebih dari 0 \n");
    }
    else {
        for (int i = 1; i <= N; i++) {
            hasil += i;
        }
        printf("Jumlah total deret N adalah: %d", hasil);
    }
  return 0;
}
