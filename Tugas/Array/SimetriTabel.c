/*Nama File 	: SimetriTabel.c*/
/*Deskripsi 	: Memeriksa apakah 2 buah array simetri atau tidak*/
/*Pembuat   	: 24060124140134-Wahyu Aji Gumelar Tri Nugroho*/
/*Tgl Pembuatan	: 13-3-2025, 9.17*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int T1;
    scanf("%d", &T1);

    int arrT1[T1];
    for (int i = 0; i < T1; i++) {
        scanf("%d", &arrT1[i]);
    }
    int T2;
    scanf("%d", &T2);
    int arrT2[T2];
    for (int i = 0; i < T2; i++) {
        scanf("%d", &arrT2[i]);
    }
  /*Algoritma*/
    if (T1 != T2) {
        printf("T1 dan T2 tidak simetri\n");
    }
    else {
        int simetri = 1;
        for (int i = 0; i < T1; i++) {
            if (arrT1[i] != arrT2[i]) {
                simetri = 0;
                break;
            }
        }
        if (simetri) {
            printf("T1 dan T2 simetri\n");
        }
        else {
            printf("T1 dan T2 tidak simetri\n");
        }
    }
  return 0;
}
