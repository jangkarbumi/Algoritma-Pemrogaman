#include <stdio.h>

int hitungPanjang(const char *str) {
    int panjang  = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main() {
    int n;
    scanf("%d", &n);

    char str[101]; // Constrain input 100, bit terkahir diisi '\0'
    scanf("%s", str); 
    

    for (int i = 0; i < hitungPanjang(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' - n + 26) % 26 + 'a';
        }
    }
    printf("%s\n", str);
    return 0;
}
