/*Nama File 	: temp.c*/
/*Deskripsi 	: template penulisan program bahasa C*/
/*Pembuat   	: <diisikan Nim-Nama>*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int M, N;
    int i, j;
  /*Algoritma*/
    scanf("%d %d", &M, &N);

    if (M != N) {
        printf("Nilai M dan N harus sama\n");
        return 0;
    }
    int matriks[M][N];
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                matriks[i][j] = 1;
            }
            else if (i < j) {
                matriks[i][j] = 0;
            }
            else if (i > j) {
                matriks[i][j] = 2;
            }
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
  return 0;
}
