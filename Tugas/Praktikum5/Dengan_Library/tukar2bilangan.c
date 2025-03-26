#include "tukar2bilangan.h"

void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
