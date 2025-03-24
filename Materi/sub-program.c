// Contoh dari Sub-Program, berupa sebuah fungsi bantuan untuk dipanggil pada fungsi utama main.
// Contoh di bawah ini merupakan sebuah sub-program untuk mengalikan input dengan 2.
// Ini adalah implementasi pada kode C untuk diktat pada halaman 75-76.
#include <stdio.h>

int Linier(int x) {
    return 2 * x;
}

int main() {
    int iX, iXX;
    scanf("%d", &iX);

    iXX = Linier(iX);

    printf("%d\n", Linier(23)); // Jika sub-program diberikan input langsung.
    printf("%d\n", iXX); // Jika sub-program diberikan input dari fungsi utama main.
    return 0;
}
