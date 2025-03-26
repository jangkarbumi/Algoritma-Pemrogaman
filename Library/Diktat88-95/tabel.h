#ifndef TABEL_H
#define TABEL_H

#include <stdio.h>
#include <stdbool.h>

#define IdxMax 100
#define IdxMin 1

typedef int ElmntType;
typedef int IdxType;
typedef struct {
    ElmntType TI[IdxMax-IdxMin+1];
    int NEff;
} TabInt;

void CreateEmpty(TabInt* T);

bool IsIdxValid(TabInt T, IdxType i);

bool IsIdxEff(TabInt T, IdxType);

bool IsEmpty(TabInt T);
bool IsFull(TabInt T);

void PrintTabel(TabInt T);
void IsiTabel(TabInt* T, ElmntType N);

ElmntType ValMax(TabInt T);
ElmntType ValMin(TabInt T);

ElmntType IdxValMax(TabInt T);
ElmntType IdxValMin(TabInt T);
#endif
