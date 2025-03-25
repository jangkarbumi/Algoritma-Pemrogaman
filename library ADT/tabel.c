#include <stdio.h>
#include "tabel.h"


void CreateEmpty(TabInt* T) {
    T->NEff = 0;
}


bool IsIdxValid(TabInt T, IdxType i) {
    return (i >= IdxMin && i <= IdxMax);
}

bool IsIdxEff(TabInt T, IdxType i) {
    return (i >= IdxMin && i <= T.NEff);
}

// Predikat tabel
bool IsEmpty(TabInt T) {
    return (T.NEff == 0);
}

bool IsFull(TabInt T) {
    return (T.NEff == IdxMax);
}


void PrintTabel(TabInt T) {
    if (IsEmpty(T)) {
        printf("Tabel Kosong.\n");
    } else {
        for (int i = 1; i <= T.NEff; i++) {
            printf("%d ", T.TI[i]);
        }
        printf("\n");
    }
}

void IsiTabel(TabInt* T, ElmntType N) {
    if (N > IdxMax) {
        printf("Jumlah elemen melebihi kapasitas maksimum.\n");
        return;
    }
    T->NEff = N;
    for (int i = 1; i <= N; i++) {
        T->TI[i] = 2 * i; 
    }
}


ElmntType ValMax(TabInt T) {
    if (IsEmpty(T)) return -1; 
    ElmntType max = T.TI[1];
    for (int i = 2; i <= T.NEff; i++) {
        if (T.TI[i] > max) {
            max = T.TI[i];
        }
    }
    return max;
}

ElmntType ValMin(TabInt T) {
    if (IsEmpty(T)) return -1; 
    ElmntType min = T.TI[1];
    for (int i = 2; i <= T.NEff; i++) {
        if (T.TI[i] < min) {
            min = T.TI[i];
        }
    }
    return min;
}


ElmntType IdxValMax(TabInt T) {
    if (IsEmpty(T)) return -1; 
    int idxMax = 1;
    for (int i = 2; i <= T.NEff; i++) {
        if (T.TI[i] > T.TI[idxMax]) {
            idxMax = i;
        }
    }
    return idxMax;
}

ElmntType IdxValMin(TabInt T) {
    if (IsEmpty(T)) return -1; 
    int idxMin = 1;
    for (int i = 2; i <= T.NEff; i++) {
        if (T.TI[i] < T.TI[idxMin]) {
            idxMin = i;
        }
    }
    return idxMin;
}
