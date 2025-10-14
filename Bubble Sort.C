#include <stdio.h>
#include <stdlib.h>

/*Bubble Sort*/



int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *A = malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[j] > A[j + 1]) {
                int t = A[j]; A[j] = A[j + 1]; A[j + 1] = t;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");


    return 0;
}
