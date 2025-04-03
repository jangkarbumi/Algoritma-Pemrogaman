#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i<N;i++) {
        scanf("%d", &arr[i]);
    }

    int ans = 0;
    for (int i=0;i<N;i++) {
        int sum = 0;

        for (int j = i; j < N; j++) {
            sum += arr[j];
        }
        ans += sum;
    }
    printf("%d", ans);   
}
