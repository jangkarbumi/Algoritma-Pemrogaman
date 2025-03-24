/*Nama File 	: JumKolBar.c*/
/*Deskripsi 	: Menjumlahkan setiap kolom dan baris dari matriks n kali n*/
/*Pembuat   	: 24060123140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 14-3-2025, 13.38*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int n, i, j, jumBar, jumKol;
    scanf("%d", &n);

    int arr[n][n];

  /*Algoritma*/
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        jumBar = 0;
        for (int j = 0; j < n; j++) {
            jumBar += arr[i][j];
        }
        printf("Jumlah dari baris ke-%d: %d \n", i + 1, jumBar);
    }

    for (i = 0; i < n; i++) {
        jumKol = 0;
        for (j = 0; j < n; j++) {
            jumKol += arr[j][i];
        }
        printf("Jumlah dari kolom ke-%d: %d \n", i + 1, jumKol);
    }
  return 0;
}
