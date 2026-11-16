#include <stdio.h>

int main() {
    int n1, n2, a[1000], b[1000];
    scanf("%d %d", &n1, &n2);
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n1; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i] * b[i]);
    }
    printf("\n");
    return 0;
}