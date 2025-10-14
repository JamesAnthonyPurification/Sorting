#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *A = malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

        for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) min = j;
        }
        if (min != i) {
            int t = A[i]; A[i] = A[min]; A[min] = t;
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

  
    return 0;
}
