#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000], hasil[1000];
    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);
    kode[strcspn(kode, "\r\n")] = '\0';
    pesan[strcspn(pesan, "\r\n")] = '\0';

    int n = strlen(kode);
    if (n != (int)strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int bintang = 0, pagar = 0;
    for (int i = 0; i < n; i++) {
        if (kode[i] == pesan[i]) {
            if (kode[i] == ' ') {
                hasil[i] = ' ';
            } else {
                hasil[i] = '*';
                bintang++;
            }
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[n] = '\0';

    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    printf("%s\n", bintang >= pagar ? "Pesan Asli" : "Pesan Palsu");
    return 0;
}