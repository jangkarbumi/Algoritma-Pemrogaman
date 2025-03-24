/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: Memeriksa apakah N adalah suatu bilangan sempurna*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.35*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int hasil = 1;
    int N;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &N);
  
  /*Algoritma*/
    if (N <= 0) {
        printf("N harus bilangan bulat positif");
    }
    else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                hasil += i;
            }
        }
    }
    if (hasil == N) {
        printf("Bilangan sempurna\n");
    }
    else {
        printf("Bukan bilangan sempurna\n");
    }
  return 0;
}
