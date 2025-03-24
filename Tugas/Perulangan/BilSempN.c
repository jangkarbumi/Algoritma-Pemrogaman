/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: Menampilkan semua bilangan sempurna sampai bilangan bulat N*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 6-3-2025, 12.45*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &N);
  
  /*Algoritma*/
    if (N <= 0){
        printf("N harus bilangan bulat positif\n");
    }
    else {
        for (int i = 1; i <= N; i++) {
            int hasil = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    hasil += j;
                }
            }
            if (hasil == i) {
                printf("%d ", hasil);
            }
        }
    }
  return 0;
}
