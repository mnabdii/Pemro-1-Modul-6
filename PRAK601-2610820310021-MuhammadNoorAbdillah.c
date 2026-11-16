#include <stdio.h>

int main() {
    int b, k, m[100][100];
    scanf("%d %d", &b, &k);
    for (int i = 0; i < b; i++)
        for (int j = 0; j < k; j++)
            scanf("%d", &m[i][j]);
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < k; j++) {
            if (j > 0) printf(" ");
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}