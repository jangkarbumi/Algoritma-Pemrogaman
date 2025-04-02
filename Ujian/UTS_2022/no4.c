#include <stdio.h>
#include <stdbool.h>

void reverseArray(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &arr[i]);
    }

    int OriginalArr[T];
    for (int i = 0; i < T; i++) {
        OriginalArr[i] = arr[i];
    }

    reverseArray(arr, T);

    bool ok = true;
    for (int i = 0; i < T; i++) {
        if (arr[i] != OriginalArr[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
}
