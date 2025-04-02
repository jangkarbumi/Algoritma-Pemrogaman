#include <stdio.h>

void reverseArray(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int T1;
    scanf("%d", &T1);
    int arr1[T1];
    for (int i = 0; i < T1; i++) {
        scanf("%d", &arr1[i]);
    }

    int T2;
    scanf("%d", &T2);
    int arr2[T2];
    for (int i = 0; i < T2; i++) {
        scanf("%d", &arr2[i]);
    }

    int maxSize;
    if (T1 > T2) {
        maxSize = T1 + 1;
    }
    else {
        maxSize = T2 + 1;
    }

    int carry = 0;
    int result[maxSize];

    reverseArray(arr1, T1);
    reverseArray(arr2, T2);

    for (int i = 0; i < maxSize; i++) {
        int sum = carry;

        if (i < T1) {
            sum += arr1[i];
        }

        if (i < T2) {
            sum += arr2[i];
        }

        carry = sum / 10;
        result[i] = sum % 10;
    }

    while (result[maxSize - 1] == 0) {
        maxSize--;
    }

    reverseArray(result, maxSize);

    for (int i = 0; i < maxSize; i++) {
        printf("%d", result[i]);
    }

}
