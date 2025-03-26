#include <stdio.h>
#include"libdecode.h"

int hitungPanjang(const char *str) {
    int panjang  = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}
