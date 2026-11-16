#include <stdio.h>

int main() {
    int n, A[100][100], B[100][100];
    scanf("%d", &n);

    printf("Matriks A\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Matriks B\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int total = 0;
            for (int k = 0; k < n; k++)
                total += A[i][k] * B[k][j];
            if (j > 0) printf(" ");
            printf("%d", total);
        }
        printf("\n");
    }
    return 0;
}