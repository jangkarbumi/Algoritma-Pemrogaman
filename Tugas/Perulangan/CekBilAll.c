/*Nama File 	: cekBillAll.c*/
/*Deskripsi 	: memeriksa apakah bilangan bulat N sebuah bilangan prima, sempurna, atau bilangan biasa*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.52*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int prima = 1;
    int hasil = 0;
    int N;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &N);
  
  /*Algoritma*/
    if (N <= 0){
        printf("N harus bilangan bulat positif\n");
    }
    else if (N == 1) {
        printf("N adalah bilangan biasa\n");
    }
    else {
        for (int i = 2; i < N; i++) {
            

            if (N % i == 0 || N == 1) {
                prima = 0;
                break;
            }
        }

        for (int i = 1; i < N; i++) {
            
            if (N % i == 0) {
                hasil += i;
            }
        }
        if (prima == 1) {
            printf("N adalah Bilangan prima\n");
        }
        else if (hasil == N) {
            printf("N adalah bilangan sempurna\n");
        }
        else {
            printf("N adalah bilangan biasa\n");
        }
    }
  return 0;
}
