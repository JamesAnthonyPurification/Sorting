#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *A = malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

       for (int i = 1; i < n; i++) {
        int temp = A[i];
        int j = i - 1;
        while (j >= 1 && A[j] > temp) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = temp;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}
