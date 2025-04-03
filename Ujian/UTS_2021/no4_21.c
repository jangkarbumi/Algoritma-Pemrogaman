#include <stdio.h>
#include <stdbool.h>

int main() {
    int T;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &arr[i]);
    }

    bool polindrom = true;
    for (int i = 0; i < T / 2; i++) {
        if (arr[i] != arr[T - 1 - i]) {
            polindrom = false;
            break;
        }
    }
    if (polindrom) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
}
