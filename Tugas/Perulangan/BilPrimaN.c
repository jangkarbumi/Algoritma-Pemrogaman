/*Nama File 	: BilPrimaN.c*/
/*Deskripsi 	: Menampilkan semua bilangan prima sampai bilangan bulat N*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.40*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &N);
  
  /*Algoritma*/
    if (N <= 0) {
        printf("N harus bilangan bulat positif\n");
    }
    else {
        for (int i = 2; i <= N; i++){
            int prima = 1;

            for (int j = 2; j < i; j++){
                if (i % j == 0) {
                    prima = 0;
                    break;
                }
            }
            if (prima) {
                printf("%d ", i);
            }
        }
    }
  return 0;
}
