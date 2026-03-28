#include <stdio.h>
#include <string.h>

int main() {
    int input, item, totalprice, price0, price1, price2, price3, price4, saldo;

    // LIST HARGA
    int nasgor = 10000;
    int sotoayam = 15000;
    int rendang = 30000;
    int gadogado = 25000;
    int sate = 20000;
    int n = 4;
    printf("==========================================\n RESTORAN KAK TIRUP\n==========================================\n");
    printf("Masukin saldonya ganteng\n");
    scanf("%d", &saldo);
    printf("Oke kak saldomu adalah: %d\n", saldo);
    printf("MAU PESAN BERAPA ITEM ? MAKSIMAL: %d ITEM\n", n);
    scanf("%d", &item);
    printf("MAU PESAN APA ?/\nMAKANAN\nMenu Makanan: \n0. Nasi Goreng: %d\n1. Soto Ayam: %d\n2. Rendang: %d\n3. Gado - gado: %d\n4. Sate: %d\n", nasgor, sotoayam, rendang, gadogado, sate);
    
    if (item > 0 && item <= n) {
        char pesan[item][20];
        for (int i = 0; i < item; i++) {
            scanf("%s", pesan[i]);
            if (strcmp(pesan[i], "0") == 0) {
                strcpy(pesan[i], "Nasi Goreng");
                printf("Jumlah pesanan (nyatakan dlm bentuk angka): ");
                int qty;
                scanf("%d", &qty);
                price0 = qty * nasgor;
                printf("%s\n", pesan[i]);
            } else if (strcmp(pesan[i], "1") == 0) {
                strcpy(pesan[i], "Soto Ayam");
                printf("Jumlah pesanan (nyatakan dlm bentuk angka): ");
                int qty;
                scanf("%d", &qty);
                price1 = qty * sotoayam;
                printf("%s\n", pesan[i]);
            } else if (strcmp(pesan[i], "2") == 0) {
                strcpy(pesan[i], "Rendang");
                printf("Jumlah pesanan (nyatakan dlm bentuk angka): ");
                int qty;
                scanf("%d", &qty);
                price2 = qty * rendang;
                printf("%s\n", pesan[i]);
            } else if (strcmp(pesan[i], "3") == 0) {
                strcpy(pesan[i], "Gado Gado");
                printf("Jumlah pesanan (nyatakan dlm bentuk angka): ");
                int qty;
                scanf("%d", &qty);
                price3 = qty * gadogado;
                printf("%s\n", pesan[i]);
            } else if (strcmp(pesan[i], "4") == 0) {
                strcpy(pesan[i], "Soto ");
                printf("Jumlah pesanan (nyatakan dlm bentuk angka): ");
                int qty;
                scanf("%d", &qty);
                price4 = qty * sate;
                printf("%s\n", pesan[i]);
            }
        }
        totalprice = price0 + price1 + price2 + price3 + price4;
        printf("%d\n", price1);
    } else {
        printf("Terjadi error ! kembali ke menu utama\n");
        main();
    }

    return 0;
}
