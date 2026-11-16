#include <stdio.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i] * (i + 1));
    }
    printf("\n");
    return 0;
}